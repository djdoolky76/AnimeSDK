#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KELKOMPBONA;
namespace System { class Object; }

#define KELKOMPBONA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB25DC0)
#define KELKOMPBONA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB25E00)
#define KELKOMPBONA___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1FB25E10)

inline static constexpr unsigned int KELKOMPBONA___c_TypeDefinitionIndex = 28140;

	class KELKOMPBONA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KELKOMPBONA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELKOMPBONA___C_CTOR_OFFSET))(this);
		}

		::KELKOMPBONA* __cctor_b__83_0()
		{
			return ((::KELKOMPBONA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELKOMPBONA___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
