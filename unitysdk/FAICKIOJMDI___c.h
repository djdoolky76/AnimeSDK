#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAICKIOJMDI;
namespace System { class Object; }

#define FAICKIOJMDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E322720)
#define FAICKIOJMDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E322750)
#define FAICKIOJMDI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E322760)

inline static constexpr unsigned int FAICKIOJMDI___c_TypeDefinitionIndex = 32085;

	class FAICKIOJMDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAICKIOJMDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICKIOJMDI___C_CTOR_OFFSET))(this);
		}

		::FAICKIOJMDI* __cctor_b__18_0()
		{
			return ((::FAICKIOJMDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAICKIOJMDI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
