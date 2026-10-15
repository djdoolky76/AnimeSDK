#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class ACFFIADPJPJ;
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHCJLNFCONE_CTOR_OFFSET UNITYSDK_OFFSET(0xB473EC0)
#define BHCJLNFCONE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB472FD0)
#define BHCJLNFCONE_EIIBGCAGFDN_OFFSET UNITYSDK_OFFSET(0xB473200)
#define BHCJLNFCONE_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0xB473B40)
#define BHCJLNFCONE_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0xB473020)
#define BHCJLNFCONE_ICAICDFCACN_OFFSET UNITYSDK_OFFSET(0xB473600)
#define BHCJLNFCONE_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB472DA0)
#define BHCJLNFCONE_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0xB472DF0)
#define BHCJLNFCONE_MPIOMPJFDLK_OFFSET UNITYSDK_OFFSET(0xB473A10)
#define BHCJLNFCONE_OOJGCAENCOI_OFFSET UNITYSDK_OFFSET(0xB473750)
#define BHCJLNFCONE_PHLABPPKACN_OFFSET UNITYSDK_OFFSET(0xB473C90)

inline static constexpr unsigned int BHCJLNFCONE_TypeDefinitionIndex = 57697;

	class BHCJLNFCONE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::ACFFIADPJPJ*>* JNLEGLBABAG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCJLNFCONE_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCJLNFCONE_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCJLNFCONE_DISPOSE_OFFSET))(this);
		}

		::System::Void EIIBGCAGFDN(::ACFFIADPJPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACFFIADPJPJ*))((::PBYTE)hIl2Cpp + BHCJLNFCONE_EIIBGCAGFDN_OFFSET))(this, a1);
		}

		::System::Void OOJGCAENCOI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHCJLNFCONE_OOJGCAENCOI_OFFSET))(this, a1);
		}

		::System::Boolean MPIOMPJFDLK(::RPG::GameCore::GameEntity* a1, ::ACFFIADPJPJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::ACFFIADPJPJ*))((::PBYTE)hIl2Cpp + BHCJLNFCONE_MPIOMPJFDLK_OFFSET))(this, a1, a2);
		}

		::System::Int32 ICAICDFCACN(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHCJLNFCONE_ICAICDFCACN_OFFSET))(this, a1);
		}

		::System::Void LMEHGELGFBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCJLNFCONE_LMEHGELGFBA_OFFSET))(this);
		}

		::System::Void FFAMPICKBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCJLNFCONE_FFAMPICKBJD_OFFSET))(this);
		}

		::System::Void FEJKOHFHHNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BHCJLNFCONE_FEJKOHFHHNN_OFFSET))(this, a1);
		}

		::System::Void PHLABPPKACN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BHCJLNFCONE_PHLABPPKACN_OFFSET))(this, a1);
		}

	};
