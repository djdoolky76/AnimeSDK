#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCAGEKHAJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DKPJAEANAPO;
class FKDBFFKIOFN;
class GEIHCPAOKKK;
class MLLIJILKJCF;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBGBDAOIBOL_DNKCHIOOBDL_OFFSET UNITYSDK_OFFSET(0x105A2EB0)
#define NBGBDAOIBOL_HNOOCCLOANE_OFFSET UNITYSDK_OFFSET(0x105A2E60)
#define NBGBDAOIBOL_LFOOMMJBPAE_OFFSET UNITYSDK_OFFSET(0x105A3E30)
#define NBGBDAOIBOL_NNOKJIHPMAG_OFFSET UNITYSDK_OFFSET(0x105A3C10)
#define NBGBDAOIBOL__CTOR_OFFSET UNITYSDK_OFFSET(0x105A2C20)

inline static constexpr unsigned int NBGBDAOIBOL_TypeDefinitionIndex = 64273;

class NBGBDAOIBOL : public ::BBDCAGEKHAJ
{
public:
	::DKPJAEANAPO* ONEFAGGPEFP; // 0x40
	::System::Collections::Generic::List_1<::MLLIJILKJCF*>* BFDBCMMCDDA; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* AAKMKALGKJB; // 0x50
	::MLLIJILKJCF* LGCGBHIIGOD; // 0x58
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0x60
	::System::Single PBFBDBCMALP; // 0x68

	::System::Void _ctor(::MoleMole::Battle::Entity* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NBGBDAOIBOL__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::System::Int32 HNOOCCLOANE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGBDAOIBOL_HNOOCCLOANE_OFFSET))(this);
	}

	::UnityEngine::Vector3 DNKCHIOOBDL(::FKDBFFKIOFN* LJBPECKCCEA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::FKDBFFKIOFN*))((::PBYTE)hIl2Cpp + NBGBDAOIBOL_DNKCHIOOBDL_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean LFOOMMJBPAE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGBDAOIBOL_LFOOMMJBPAE_OFFSET))(this);
	}

	::System::Boolean NNOKJIHPMAG(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* NAKLJLDEBNG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + NBGBDAOIBOL_NNOKJIHPMAG_OFFSET))(this, NAKLJLDEBNG);
	}
};
