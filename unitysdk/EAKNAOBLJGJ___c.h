#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAKNAOBLJGJ;
namespace System { class Object; }

#define EAKNAOBLJGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22D900)
#define EAKNAOBLJGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22D930)
#define EAKNAOBLJGJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E22D940)

inline static constexpr unsigned int EAKNAOBLJGJ___c_TypeDefinitionIndex = 34721;

	class EAKNAOBLJGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAKNAOBLJGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ___C_CTOR_OFFSET))(this);
		}

		::EAKNAOBLJGJ* __cctor_b__38_0()
		{
			return ((::EAKNAOBLJGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKNAOBLJGJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
