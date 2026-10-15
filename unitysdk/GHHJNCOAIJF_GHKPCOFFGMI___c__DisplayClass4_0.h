#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class IHGIENOHBMJ;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define GHHJNCOAIJF_GHKPCOFFGMI___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A15320)
#define GHHJNCOAIJF_GHKPCOFFGMI___C__DISPLAYCLASS4_0__SEND_G___SEND_0_OFFSET UNITYSDK_OFFSET(0x15A156A0)

inline static constexpr unsigned int GHHJNCOAIJF_GHKPCOFFGMI___c__DisplayClass4_0_TypeDefinitionIndex = 69353;

	class GHHJNCOAIJF_GHKPCOFFGMI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::GHHJNCOAIJF* req; // 0x10
		::RPG::Client::Promises::Promise_1<::IHGIENOHBMJ*>* promise; // 0x18
		::UnityEngine::Networking::UnityWebRequest* unityReq; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _Send_g___Send_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI___C__DISPLAYCLASS4_0__SEND_G___SEND_0_OFFSET))(this);
		}

	};
