#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGLDJCOLDAH.h"
#include "unitysdk/PJBGHMDHHBM.h"

class MIIBCEAHFFB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIHMJEPBGIN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DE5CB80)
#define NIHMJEPBGIN_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DE5D2B0)
#define NIHMJEPBGIN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DE5CC50)
#define NIHMJEPBGIN_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DE5D090)
#define NIHMJEPBGIN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DE5CFE0)
#define NIHMJEPBGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5CBC0)

inline static constexpr unsigned int NIHMJEPBGIN_TypeDefinitionIndex = 93831;

class NIHMJEPBGIN : public ::PJBGHMDHHBM
{
public:
	::NGLDJCOLDAH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MIIBCEAHFFB*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMJEPBGIN__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMJEPBGIN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIHMJEPBGIN_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMJEPBGIN_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMJEPBGIN_PHOADBJGFBE_OFFSET))(this);
	}

	::MIIBCEAHFFB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::MIIBCEAHFFB*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NIHMJEPBGIN_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
