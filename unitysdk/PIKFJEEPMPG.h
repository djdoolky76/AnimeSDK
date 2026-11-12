#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCIAMPIIHPF.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PIKFJEEPMPG_OENANCJLKHA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define PIKFJEEPMPG_CLIGNBKCDPO_OFFSET UNITYSDK_OFFSET(0xCB933B0)
#define PIKFJEEPMPG_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0xCB93120)
#define PIKFJEEPMPG_CTOR_OFFSET UNITYSDK_OFFSET(0xCB94E50)
#define PIKFJEEPMPG_EBBJOKFAMHK_OFFSET UNITYSDK_OFFSET(0xCB94A40)
#define PIKFJEEPMPG_FCNHIJCHFJI_OFFSET UNITYSDK_OFFSET(0xCB94470)
#define PIKFJEEPMPG_GET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0xCB94E40)
#define PIKFJEEPMPG_JDOKPKPNICG_OFFSET UNITYSDK_OFFSET(0xCB94620)
#define PIKFJEEPMPG_NNGOEGHABPB_OFFSET UNITYSDK_OFFSET(0xCB93E50)
#define PIKFJEEPMPG_PJIBOFIPDIN_OFFSET UNITYSDK_OFFSET(0xCB93BE0)

inline static constexpr unsigned int PIKFJEEPMPG_TypeDefinitionIndex = 72610;

	class PIKFJEEPMPG : public ::BCIAMPIIHPF
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GINMNCLNFCF; // 0x30
		::PIKFJEEPMPG_OENANCJLKHA* GJBOKLDCKEG; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* IKJPLHINJMH; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EJJJMLPECEJ; // 0x48
		::System::Object* AMFAHMJGOEE; // 0x50
		::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* JAHPONLMCEN; // 0x58
		::UnityEngine::Vector3 PCEBHJHHLLF; // 0x60
		::System::Int32 KBJBJFNMKJD; // 0x6C
		::System::Single MJNJKFNENFD; // 0x70
		::UnityEngine::Vector3 OGPDIJFMIHM; // 0x74
		::System::Int32 HOGEMAHFFEF; // 0x80
		::UnityEngine::Vector3 NIMMIBKOCCC; // 0x84
		::System::Int32 HOCMHABKLGJ; // 0x90
		::UnityEngine::Vector3 MLPLPKGKGEG; // 0x94
		::System::Boolean IKKGNCDIAAC; // 0xA0
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 EHAIKBDMGFJ; // 0xA4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_CTOR_OFFSET))(this);
		}

		::System::Void CONFIAMBBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_CONFIAMBBBC_OFFSET))(this);
		}

		::System::Void CLIGNBKCDPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_CLIGNBKCDPO_OFFSET))(this);
		}

		::System::Boolean JDOKPKPNICG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_JDOKPKPNICG_OFFSET))(this, a1);
		}

		::System::Boolean FCNHIJCHFJI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_FCNHIJCHFJI_OFFSET))(this, a1);
		}

		::System::Boolean EBBJOKFAMHK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_EBBJOKFAMHK_OFFSET))(this, a1);
		}

		::System::Void NNGOEGHABPB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_NNGOEGHABPB_OFFSET))(this, a1);
		}

		::System::Single PJIBOFIPDIN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_PJIBOFIPDIN_OFFSET))(this);
		}

		::System::Boolean get_EnableRuntimeTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKFJEEPMPG_GET_ENABLERUNTIMETICK_OFFSET))(this);
		}

	};
