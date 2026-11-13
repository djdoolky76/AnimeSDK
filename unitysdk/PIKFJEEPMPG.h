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

#define PIKFJEEPMPG_CLIGNBKCDPO_OFFSET UNITYSDK_OFFSET(0x1A9CFDE0)
#define PIKFJEEPMPG_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0x1A9CFB50)
#define PIKFJEEPMPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D18B0)
#define PIKFJEEPMPG_EBBJOKFAMHK_OFFSET UNITYSDK_OFFSET(0x1A9D14A0)
#define PIKFJEEPMPG_FCNHIJCHFJI_OFFSET UNITYSDK_OFFSET(0x1A9D0EC0)
#define PIKFJEEPMPG_GET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x1A9D18A0)
#define PIKFJEEPMPG_JDOKPKPNICG_OFFSET UNITYSDK_OFFSET(0x1A9D1070)
#define PIKFJEEPMPG_NNGOEGHABPB_OFFSET UNITYSDK_OFFSET(0x1A9D08A0)
#define PIKFJEEPMPG_PJIBOFIPDIN_OFFSET UNITYSDK_OFFSET(0x1A9D0630)

inline static constexpr unsigned int PIKFJEEPMPG_TypeDefinitionIndex = 72610;

	class PIKFJEEPMPG : public ::BCIAMPIIHPF
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* GINMNCLNFCF; // 0x30
		::PIKFJEEPMPG_OENANCJLKHA* GJBOKLDCKEG; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EJJJMLPECEJ; // 0x40
		::System::Object* AMFAHMJGOEE; // 0x48
		::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* JAHPONLMCEN; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::SimpleTransform>* IKJPLHINJMH; // 0x58
		::System::Int32 KBJBJFNMKJD; // 0x60
		::UnityEngine::Vector3 PCEBHJHHLLF; // 0x64
		::UnityEngine::Vector3 OGPDIJFMIHM; // 0x70
		::UnityEngine::Vector3 EHAIKBDMGFJ; // 0x7C
		::System::Int32 HOGEMAHFFEF; // 0x88
		::UnityEngine::Vector3 NIMMIBKOCCC; // 0x8C
		::System::Int32 HOCMHABKLGJ; // 0x98
		::System::Boolean IKKGNCDIAAC; // 0x9C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 MLPLPKGKGEG; // 0xA0
		::System::Single MJNJKFNENFD; // 0xAC
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
