#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class DEKIPIJNJBJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define LDJIOJPKFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB625C70)
#define LDJIOJPKFAJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB625B40)
#define LDJIOJPKFAJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xB6259D0)

	class LDJIOJPKFAJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* JKOMLECEPJL; // 0x60
		::UnityEngine::UI::Text* AEJPECICBGN; // 0x68
		::UnityEngine::Transform* MGCMKLNGPOF; // 0x70
		::UnityEngine::UI::Text* DKPGGBHIKII; // 0x78
		::UnityEngine::Transform* EFNNMOKGGEB; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJIOJPKFAJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJIOJPKFAJ__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::Collections::Generic::List_1<::DEKIPIJNJBJ*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DEKIPIJNJBJ*>*, ::System::Int32))((::PBYTE)hIl2Cpp + LDJIOJPKFAJ_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

	};
