#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class OEHALHHJEFI;
namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MAEDBOEHLMA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11F2AFE0)
#define MAEDBOEHLMA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11F2B230)
#define MAEDBOEHLMA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11F2B1A0)
#define MAEDBOEHLMA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11F2AF30)
#define MAEDBOEHLMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F2B030)
#define MAEDBOEHLMA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2B0B0)

inline static constexpr unsigned int MAEDBOEHLMA_TypeDefinitionIndex = 90771;

class MAEDBOEHLMA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x3E; // 0x0
	::System::Action_3<::System::Int32, ::System::Int32, ::System::UInt32>* IEOKEGHDGFB; // 0x48
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*>* IJICHHFHLIC; // 0x50
	::System::Collections::Generic::List_1<::OEHALHHJEFI*>* FIJILKICNPD; // 0x58
	::System::Int32 EGPDMKJMIOI; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAEDBOEHLMA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEDBOEHLMA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEDBOEHLMA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEDBOEHLMA_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEDBOEHLMA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MAEDBOEHLMA* JFDOOELFAOA()
	{
		return ((::MAEDBOEHLMA*(*)())((::PBYTE)hIl2Cpp + MAEDBOEHLMA_JFDOOELFAOA_OFFSET))();
	}
};
