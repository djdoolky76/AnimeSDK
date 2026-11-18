#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNpcAudioSettings.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARAUDIOASSETSSO__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB0B30)

inline static constexpr unsigned int NPCAvatarAudioAssetsSO_TypeDefinitionIndex = 66618;

class NPCAvatarAudioAssetsSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
{
public:
	::ENPCAvatarGender gender; // 0x58
	::ENPCAvatarSize size; // 0x5C
	::NPCAvatarMeshAssetsSO_FNpcAudioSettings audioSettings; // 0x60
	::System::Collections::Generic::List_1<::System::Object*>* gameplayTagMaskActions; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARAUDIOASSETSSO__CTOR_OFFSET))(this);
	}
};
