#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D42A10)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D42A50)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__EXITPREPPAGE_B__23_0_OFFSET UNITYSDK_OFFSET(0x18D42A60)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleMoviePageController___c_TypeDefinitionIndex = 69033;

	class UICinemaSingleMoviePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICinemaSingleMoviePageController___c_TypeDefinitionIndex)->GetStaticField(0x4C340);
		}
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UICinemaSingleMoviePageController___c_TypeDefinitionIndex)->GetStaticField(0x4C348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ExitPrepPage_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__EXITPREPPAGE_B__23_0_OFFSET))(this);
		}
	};
}
