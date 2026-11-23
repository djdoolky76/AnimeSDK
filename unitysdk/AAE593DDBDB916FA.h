#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"
#include "unitysdk/E68AA4EB51923C98/A663E03344D85C3A.h"
#include "unitysdk/A35A1C9806172EA0.h"

class A2F46DB802C34BC7;
class E6ACEE90ABF15D6E;
namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define AAE593DDBDB916FA_B4B62E34587AFA33_OFFSET UNITYSDK_OFFSET(0x1E39680)
#define AAE593DDBDB916FA_B8244D711D9DF31E_OFFSET UNITYSDK_OFFSET(0x1E39700)
#define AAE593DDBDB916FA_EC3033C0485522FB_1_OFFSET UNITYSDK_OFFSET(0x1E39E20)
#define AAE593DDBDB916FA_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1E39C60)
#define AAE593DDBDB916FA_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1E39460)
#define AAE593DDBDB916FA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E39F10)

inline static constexpr unsigned int AAE593DDBDB916FA_TypeDefinitionIndex = 9506;

class AAE593DDBDB916FA : public ::A916C3A9658A83A2
{
public:
	::ABC::UI::MonoPrefabLoader* E54660C1DE617658; // 0x48
	::System::Collections::Generic::List_1<::A2F46DB802C34BC7*>* A7E749D986343329; // 0x50
	::E6ACEE90ABF15D6E* EE9A0307D7DE17EE; // 0x58

	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + AAE593DDBDB916FA__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAE593DDBDB916FA_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::Collections::Generic::List_1<::A35A1C9806172EA0<::E68AA4EB51923C98::A663E03344D85C3A, ::System::UInt32, ::System::UInt32>>* FF4CDA7CE90CAA15)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::A35A1C9806172EA0<::E68AA4EB51923C98::A663E03344D85C3A, ::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + AAE593DDBDB916FA_EC3033C0485522FB_OFFSET))(this, FF4CDA7CE90CAA15);
	}

	::System::Void B8244D711D9DF31E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAE593DDBDB916FA_B8244D711D9DF31E_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB_1(::E6ACEE90ABF15D6E* B4E8F20C473A5866, ::UnityEngine::Transform* EFE497ABF6BF98D8)
	{
		return ((::System::Void(*)(::PVOID, ::E6ACEE90ABF15D6E*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AAE593DDBDB916FA_EC3033C0485522FB_1_OFFSET))(this, B4E8F20C473A5866, EFE497ABF6BF98D8);
	}

	::System::Void B4B62E34587AFA33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAE593DDBDB916FA_B4B62E34587AFA33_OFFSET))(this);
	}
};
