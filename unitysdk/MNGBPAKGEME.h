#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
class FIMAFJNMOGM;
namespace System { class Object; }
namespace System { class String; }

#define MNGBPAKGEME_ANFJPEPFLKL_OFFSET UNITYSDK_OFFSET(0xBA07F10)
#define MNGBPAKGEME_CTOR_OFFSET UNITYSDK_OFFSET(0xBA08030)
#define MNGBPAKGEME_FLPLKDECHNC_OFFSET UNITYSDK_OFFSET(0xBA07BB0)
#define MNGBPAKGEME_IAOABDLKHHO_OFFSET UNITYSDK_OFFSET(0xBA07FA0)
#define MNGBPAKGEME_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBA07B60)
#define MNGBPAKGEME_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA07B10)
#define MNGBPAKGEME_OKCJEKDDIHD_OFFSET UNITYSDK_OFFSET(0xBA07E80)

	class MNGBPAKGEME : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* BGDDKFHKAKM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGBPAKGEME_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + MNGBPAKGEME_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGBPAKGEME_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::String* FLPLKDECHNC(::System::String* a1, ::System::Object* a2, ::FIMAFJNMOGM* a3, ::PKHNHEBKPPI a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::FIMAFJNMOGM*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + MNGBPAKGEME_FLPLKDECHNC_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* ANFJPEPFLKL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MNGBPAKGEME_ANFJPEPFLKL_OFFSET))(a1);
		}

		static ::System::String* IAOABDLKHHO(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MNGBPAKGEME_IAOABDLKHHO_OFFSET))(a1);
		}

		static ::System::String* OKCJEKDDIHD(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MNGBPAKGEME_OKCJEKDDIHD_OFFSET))(a1);
		}

	};
