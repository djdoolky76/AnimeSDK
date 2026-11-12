#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
class FKIODIMJPNA;
class MDNGGPDFFIE;
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define AJACKPCNNDM_AMLEBHCKCNK_OFFSET UNITYSDK_OFFSET(0x12D8F590)
#define AJACKPCNNDM_CTOR_OFFSET UNITYSDK_OFFSET(0x12D8D9F0)
#define AJACKPCNNDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D8E0C0)
#define AJACKPCNNDM_ECHIBEEFJEC_OFFSET UNITYSDK_OFFSET(0x12D8F700)
#define AJACKPCNNDM_ENADAHKCPPO_OFFSET UNITYSDK_OFFSET(0x12D8E310)
#define AJACKPCNNDM_EOGDCKICMAD_OFFSET UNITYSDK_OFFSET(0x12D8DCA0)
#define AJACKPCNNDM_FJFIGBFDPCB_OFFSET UNITYSDK_OFFSET(0x12D8ED10)
#define AJACKPCNNDM_GOCPAPACCLN_OFFSET UNITYSDK_OFFSET(0x12D8F040)
#define AJACKPCNNDM_HFBMBNOFJCI_OFFSET UNITYSDK_OFFSET(0x12D8E3C0)
#define AJACKPCNNDM_JNDIKLHMKHN_OFFSET UNITYSDK_OFFSET(0x12D8EFA0)
#define AJACKPCNNDM_JPJLGIJJLAO_OFFSET UNITYSDK_OFFSET(0x12D8E580)
#define AJACKPCNNDM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12D8DC50)
#define AJACKPCNNDM_LDPAGNONCDP_OFFSET UNITYSDK_OFFSET(0x12D8EB40)
#define AJACKPCNNDM_MHADHEBJJBG_OFFSET UNITYSDK_OFFSET(0x12D8F1C0)
#define AJACKPCNNDM_MIDALKCCPBJ_OFFSET UNITYSDK_OFFSET(0x12D8EDD0)
#define AJACKPCNNDM_NLJDDJHKKGA_OFFSET UNITYSDK_OFFSET(0x12D8E7B0)
#define AJACKPCNNDM_OIDFMCNKNAJ_OFFSET UNITYSDK_OFFSET(0x12D8E470)
#define AJACKPCNNDM_OMGNJOFHKIP_OFFSET UNITYSDK_OFFSET(0x12D8E890)
#define AJACKPCNNDM_PIAHDCMLPCJ_OFFSET UNITYSDK_OFFSET(0x12D8F630)
#define AJACKPCNNDM_PMCNPDKDIKF_OFFSET UNITYSDK_OFFSET(0x12D8F320)

inline static constexpr unsigned int AJACKPCNNDM_TypeDefinitionIndex = 61485;

	class AJACKPCNNDM : public ::System::Object
	{
	public:
		::MDNGGPDFFIE* OJMMJIALPON; // 0x10
		::System::String* LIJDNBGOJOM; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* DBCCOEFFKCM; // 0x20
		::System::Collections::Generic::HashSet_1<::FKIODIMJPNA*>* JFBLINOFNPJ; // 0x28
		::RPG::OutlinePostFXMonoPlugin* DKILKLPIJLK; // 0x30
		::FKIODIMJPNA* JDKCCDELMFG; // 0x38
		::System::Single COLJABDHPOM; // 0x40
		::System::Boolean AMJEOIAHILF; // 0x44
		::System::Boolean OMFCBIIHKPJ; // 0x45
		::System::Byte _padding0[0x2];
		::UnityEngine::Color HBEFIMAAJHD; // 0x48
		// static const ::System::String* DNMHGLOMEKL; // 0x0
		// static const ::System::String* KKHJBELIION; // 0x0
		// static const ::System::String* DCFFPDLMKPE; // 0x0
		// static const ::System::String* BGEIGJCEMOK; // 0x0
		// static const ::System::String* NONHBLKBKJO; // 0x0
		::System::Void _ctor(::MDNGGPDFFIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDNGGPDFFIE*))((::PBYTE)hIl2Cpp + AJACKPCNNDM_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM_DISPOSE_OFFSET))(this);
		}

		::System::Void EOGDCKICMAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM_EOGDCKICMAD_OFFSET))(this);
		}

		::System::Void OIDFMCNKNAJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AJACKPCNNDM_OIDFMCNKNAJ_OFFSET))(this, a1, a2);
		}

		::System::Void ENADAHKCPPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM_ENADAHKCPPO_OFFSET))(this);
		}

		::System::Void JPJLGIJJLAO(::FKIODIMJPNA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJACKPCNNDM_JPJLGIJJLAO_OFFSET))(this, a1, a2);
		}

		::System::Void NLJDDJHKKGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM_NLJDDJHKKGA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* OMGNJOFHKIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AJACKPCNNDM_OMGNJOFHKIP_OFFSET))(this, a1);
		}

		::System::Void LDPAGNONCDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM_LDPAGNONCDP_OFFSET))(this);
		}

		::System::Void HFBMBNOFJCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM_HFBMBNOFJCI_OFFSET))(this);
		}

		::System::Void FJFIGBFDPCB(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + AJACKPCNNDM_FJFIGBFDPCB_OFFSET))(this, a1);
		}

		::System::Void JNDIKLHMKHN(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + AJACKPCNNDM_JNDIKLHMKHN_OFFSET))(this, a1);
		}

		::System::Void GOCPAPACCLN(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AJACKPCNNDM_GOCPAPACCLN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MIDALKCCPBJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AJACKPCNNDM_MIDALKCCPBJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* MHADHEBJJBG(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + AJACKPCNNDM_MHADHEBJJBG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PMCNPDKDIKF(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJACKPCNNDM_PMCNPDKDIKF_OFFSET))(this, a1, a2);
		}

		::System::Void AMLEBHCKCNK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AJACKPCNNDM_AMLEBHCKCNK_OFFSET))(this, a1);
		}

		::System::Void PIAHDCMLPCJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AJACKPCNNDM_PIAHDCMLPCJ_OFFSET))(this, a1);
		}

		::MDNGGPDFFIE* ECHIBEEFJEC()
		{
			return ((::MDNGGPDFFIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM_ECHIBEEFJEC_OFFSET))(this);
		}

	};
