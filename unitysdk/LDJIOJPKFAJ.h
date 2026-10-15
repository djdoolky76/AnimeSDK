#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class DEKIPIJNJBJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define LDJIOJPKFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB61F230)
#define LDJIOJPKFAJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB61F100)
#define LDJIOJPKFAJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xB61EF90)

inline static constexpr unsigned int LDJIOJPKFAJ_TypeDefinitionIndex = 71195;

	class LDJIOJPKFAJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* AEJPECICBGN; // 0x60
		::UnityEngine::UI::Text* JKOMLECEPJL; // 0x68
		::UnityEngine::UI::Text* DKPGGBHIKII; // 0x70
		::UnityEngine::Transform* EFNNMOKGGEB; // 0x78
		::UnityEngine::Transform* MGCMKLNGPOF; // 0x80
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
