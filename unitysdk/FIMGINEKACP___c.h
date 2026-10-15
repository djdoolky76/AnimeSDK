#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIMGINEKACP;
namespace System { class Object; }

#define FIMGINEKACP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36EB90)
#define FIMGINEKACP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E36EBD0)
#define FIMGINEKACP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E36EBE0)

inline static constexpr unsigned int FIMGINEKACP___c_TypeDefinitionIndex = 33566;

	class FIMGINEKACP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIMGINEKACP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP___C_CTOR_OFFSET))(this);
		}

		::FIMGINEKACP* __cctor_b__28_0()
		{
			return ((::FIMGINEKACP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMGINEKACP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
