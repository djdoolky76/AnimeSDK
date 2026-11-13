#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LALKBPJANIH;
namespace System { class Object; }

#define LALKBPJANIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2038C190)
#define LALKBPJANIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2038C1D0)
#define LALKBPJANIH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x2038C1E0)

inline static constexpr unsigned int LALKBPJANIH___c_TypeDefinitionIndex = 29817;

	class LALKBPJANIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LALKBPJANIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKBPJANIH___C_CTOR_OFFSET))(this);
		}

		::LALKBPJANIH* __cctor_b__53_0()
		{
			return ((::LALKBPJANIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKBPJANIH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
