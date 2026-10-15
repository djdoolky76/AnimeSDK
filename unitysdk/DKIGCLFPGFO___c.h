#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKIGCLFPGFO;
namespace System { class Object; }

#define DKIGCLFPGFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AA930)
#define DKIGCLFPGFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AA970)
#define DKIGCLFPGFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1AA980)

inline static constexpr unsigned int DKIGCLFPGFO___c_TypeDefinitionIndex = 34807;

	class DKIGCLFPGFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKIGCLFPGFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO___C_CTOR_OFFSET))(this);
		}

		::DKIGCLFPGFO* __cctor_b__28_0()
		{
			return ((::DKIGCLFPGFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKIGCLFPGFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
