#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEPIHJOHLKM;
namespace System { class Object; }

#define OEPIHJOHLKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE35060)
#define OEPIHJOHLKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE35090)
#define OEPIHJOHLKM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE350A0)

inline static constexpr unsigned int OEPIHJOHLKM___c_TypeDefinitionIndex = 33175;

	class OEPIHJOHLKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPIHJOHLKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM___C_CTOR_OFFSET))(this);
		}

		::OEPIHJOHLKM* __cctor_b__23_0()
		{
			return ((::OEPIHJOHLKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
