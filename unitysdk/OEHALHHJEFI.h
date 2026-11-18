#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEHALHHJEFI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15FD5DF0)
#define OEHALHHJEFI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15FD6750)
#define OEHALHHJEFI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15FD5E50)
#define OEHALHHJEFI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15FD67D0)
#define OEHALHHJEFI__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD7910)

inline static constexpr unsigned int OEHALHHJEFI_TypeDefinitionIndex = 70836;

class OEHALHHJEFI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* HGMPEMAPFOF; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* DHEOLAOOLJJ; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* GAMAMOINFIH; // 0x20
	::System::String* ABACFADGIMA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicFloat*>* MFKJBIKGFAP; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* JACOKKCALHO; // 0x38
	::UnityEngine::Vector3 MFDOBMEPCLL; // 0x40
	::UnityEngine::Vector3 KKOPHFNJANP; // 0x4C
	::System::Boolean PDBJDMPOOEE; // 0x58
	::System::Boolean ABGHPBFOEIF; // 0x59
	::System::Byte _padding0[0x2];
	::System::Int32 PGOGIKKFBFI; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHALHHJEFI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OEHALHHJEFI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OEHALHHJEFI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OEHALHHJEFI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OEHALHHJEFI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
