#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxVector.h"

class MCLNHLPAAOH;
namespace System { template <typename T> class Action_1; }

#define DBLDHKNHHNH_AKLFFMFKMHF_OFFSET UNITYSDK_OFFSET(0x16614FB0)
#define DBLDHKNHHNH_DGKHOLLHCPA_OFFSET UNITYSDK_OFFSET(0x16614CB0)
#define DBLDHKNHHNH_KOCGFAJAPGF_OFFSET UNITYSDK_OFFSET(0x16614B30)
#define DBLDHKNHHNH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16614A90)
#define DBLDHKNHHNH__CTOR_OFFSET UNITYSDK_OFFSET(0x16614A80)

inline static constexpr unsigned int DBLDHKNHHNH_TypeDefinitionIndex = 9238;

class DBLDHKNHHNH : public ::System::Object
{
public:
	static ::Foundation::AssetPath* StaticGet_OOCIPLMBBNJ()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(DBLDHKNHHNH_TypeDefinitionIndex)->GetStaticField(0x7A80);
	}
	static ::Foundation::AssetPath* StaticGet_NOEMDOINJII()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(DBLDHKNHHNH_TypeDefinitionIndex)->GetStaticField(0x7A90);
	}
	static ::Foundation::AssetPath* StaticGet_KFCDFIOHDEC()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(DBLDHKNHHNH_TypeDefinitionIndex)->GetStaticField(0x7AA0);
	}
	::Foundation::AssetRequestHandle JMCLEFGPIOB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLDHKNHHNH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBLDHKNHHNH__CCTOR_OFFSET))();
	}

	::System::Void KOCGFAJAPGF(::System::Action_1<::MCLNHLPAAOH*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MCLNHLPAAOH*>*))((::PBYTE)hIl2Cpp + DBLDHKNHHNH_KOCGFAJAPGF_OFFSET))(this, EJGDHCIBCJH);
	}

	::MCLNHLPAAOH* DGKHOLLHCPA()
	{
		return ((::MCLNHLPAAOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLDHKNHHNH_DGKHOLLHCPA_OFFSET))(this);
	}

	::System::Void AKLFFMFKMHF(::System::Boolean POKGHNHCMPH, ::FlexBuffers::FlxVector IEFBHIDIPPL, ::MCLNHLPAAOH* JOEIMPHNPAM, ::MCLNHLPAAOH* OEDELAFMBNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::FlexBuffers::FlxVector, ::MCLNHLPAAOH*, ::MCLNHLPAAOH*))((::PBYTE)hIl2Cpp + DBLDHKNHHNH_AKLFFMFKMHF_OFFSET))(this, POKGHNHCMPH, IEFBHIDIPPL, JOEIMPHNPAM, OEDELAFMBNP);
	}
};
