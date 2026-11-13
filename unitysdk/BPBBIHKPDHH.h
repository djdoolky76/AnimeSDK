#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertOutlineDepthMode.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/HoverKind.h"
#include "unitysdk/System/Object.h"
class CLIECFICBEN;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class MJAOHLLPLGK;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertView; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Renderer; }

#define BPBBIHKPDHH_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x1B5F8830)
#define BPBBIHKPDHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F8320)
#define BPBBIHKPDHH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B5F8360)
#define BPBBIHKPDHH_GDGLHDBAEED_OFFSET UNITYSDK_OFFSET(0x1B5F87A0)
#define BPBBIHKPDHH_GOGIBHGMNPF_OFFSET UNITYSDK_OFFSET(0x1B5F8930)
#define BPBBIHKPDHH_LPLELPMPGGP_OFFSET UNITYSDK_OFFSET(0x1B5F8430)
#define BPBBIHKPDHH_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1B5F88A0)

inline static constexpr unsigned int BPBBIHKPDHH_TypeDefinitionIndex = 80013;

	class BPBBIHKPDHH : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* AMBLEJEBOIA; // 0x10
		::CLIECFICBEN* NOIGFGJJDLB; // 0x18
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x20
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x28
		::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineDepthMode GDHAHNMKDLN; // 0x30
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + BPBBIHKPDHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBBIHKPDHH_EXECUTE_OFFSET))(this);
		}

		::System::Void GDGLHDBAEED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBBIHKPDHH_GDGLHDBAEED_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBBIHKPDHH_TEARDOWN_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBBIHKPDHH_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* LPLELPMPGGP(::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineDepthMode a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOutlineDepthMode))((::PBYTE)hIl2Cpp + BPBBIHKPDHH_LPLELPMPGGP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* GOGIBHGMNPF(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1, ::RPG::Client::LittleGame::ComicDessert::HoverKind a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertView*, ::RPG::Client::LittleGame::ComicDessert::HoverKind, ::System::UInt32))((::PBYTE)hIl2Cpp + BPBBIHKPDHH_GOGIBHGMNPF_OFFSET))(this, a1, a2, a3);
		}

	};
