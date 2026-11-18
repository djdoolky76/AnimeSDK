#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class GEOIPGDJMNO;
namespace MoleMole::Battle { class Entity; }
namespace RootMotion::FinalIK { class LookAtIK; }
namespace RootMotion::FinalIK { class LookController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define KBHJAAOJPGI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17638020)
#define KBHJAAOJPGI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17638230)
#define KBHJAAOJPGI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x176381A0)
#define KBHJAAOJPGI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17637DA0)
#define KBHJAAOJPGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x17638070)
#define KBHJAAOJPGI__CTOR_OFFSET UNITYSDK_OFFSET(0x176380F0)

inline static constexpr unsigned int KBHJAAOJPGI_TypeDefinitionIndex = 51920;

class KBHJAAOJPGI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x20; // 0x0
	::UnityEngine::Transform* HBAIENEBGMH; // 0x48
	::System::Collections::Generic::List_1<::System::Object*>* EAGCGNEJCDD; // 0x50
	::GEOIPGDJMNO* GADOMGLJNNJ; // 0x58
	::MoleMole::Battle::Entity* HODAIDNDKHD; // 0x60
	::RootMotion::FinalIK::LookAtIK* CINBJMAMPIF; // 0x68
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::LookController*>* FJBCCHOLHII; // 0x70
	::System::Boolean BKEEIFNAANN; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBHJAAOJPGI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHJAAOJPGI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHJAAOJPGI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHJAAOJPGI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHJAAOJPGI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::KBHJAAOJPGI* JFDOOELFAOA()
	{
		return ((::KBHJAAOJPGI*(*)())((::PBYTE)hIl2Cpp + KBHJAAOJPGI_JFDOOELFAOA_OFFSET))();
	}
};
