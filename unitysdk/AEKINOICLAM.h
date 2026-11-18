#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHDNMGDDINH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEKINOICLAM_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x730C30)
#define AEKINOICLAM_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x730C20)
#define AEKINOICLAM_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x730B80)

inline static constexpr unsigned int AEKINOICLAM_TypeDefinitionIndex = 92074;

struct alignas(8) AEKINOICLAM
{
	::System::String* DJJGLILJKEA; // 0x10
	::System::String* MGEDBKBHJPM; // 0x18
	::System::Int32 DKMFBDKJIEM; // 0x20
	::UnityEngine::Vector2 ECGNKDFDDJI; // 0x24
	::UnityEngine::Vector2 KHBIKKMGNGD; // 0x2C
	::System::Boolean OFLFHDKIKKP; // 0x34
	::System::Byte _padding0[0x3];
	::System::Collections::Generic::List_1<::AHDNMGDDINH>* MEBFJMKOILL; // 0x38

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + AEKINOICLAM_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKINOICLAM_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + AEKINOICLAM_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
