#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LODKHMFCLOG.h"
#include "unitysdk/NECBOLFGIMA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define EDPHMDDGGGL_HLHGMJMBEIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1332FD80)

inline static constexpr unsigned int EDPHMDDGGGL_HLHGMJMBEIM_TypeDefinitionIndex = 60719;

	class EDPHMDDGGGL_HLHGMJMBEIM : public ::System::Object
	{
	public:
		::System::String* DKNMIJKJKHF; // 0x10
		::System::Nullable_1<::LODKHMFCLOG> INEJMACHPIJ; // 0x18
		::System::Byte _padding0[0x20];
		::System::String* GEDFIDJOHOG; // 0x40
		::System::Nullable_1<::NECBOLFGIMA> OHLEJJEOKBP; // 0x48
		::System::Byte _padding1[0x10];
		::System::Boolean DCPPNHHBHEE; // 0x60
		::System::Boolean GNHPNHJJCBF; // 0x61
		::System::Boolean JAHFGCPKFOC; // 0x62
		::System::Boolean FGCBJIKAHMN; // 0x63
		::System::Boolean FLDJCKMHBMD; // 0x64
		::System::Boolean KDKJKJBMDAF; // 0x65
		::System::Boolean KNBCNKCEELE; // 0x66
		::System::Byte _padding2[0x1];
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x68
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL_HLHGMJMBEIM_CTOR_OFFSET))(this);
		}

	};
