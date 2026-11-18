#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class MBBCFJKMFNF;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MBBCFJKMFNF_KJOIPCADIKA_ALDPMFOHGKN_OFFSET UNITYSDK_OFFSET(0x159176B0)
#define MBBCFJKMFNF_KJOIPCADIKA_CPBDLOEPPFF_OFFSET UNITYSDK_OFFSET(0x15917200)
#define MBBCFJKMFNF_KJOIPCADIKA_DBCLNFHKPFK_OFFSET UNITYSDK_OFFSET(0x15917000)
#define MBBCFJKMFNF_KJOIPCADIKA__CTOR_OFFSET UNITYSDK_OFFSET(0x15916FF0)

inline static constexpr unsigned int MBBCFJKMFNF_KJOIPCADIKA_TypeDefinitionIndex = 73976;

class MBBCFJKMFNF_KJOIPCADIKA : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* FBNAOKBGHJJ; // 0x20
	::System::Action_1<::Foundation::AssetRequestHandle>* NKIFJCDNCFI; // 0x28
	::MBBCFJKMFNF* KLHPEBKNIFB; // 0x30
	::System::Action* NHGFOKGBFJA; // 0x38
	::UnityEngine::UI::Image* DNKEKDIEAMH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_KJOIPCADIKA__CTOR_OFFSET))(this);
	}

	::System::Void DBCLNFHKPFK(::UnityEngine::Sprite* FPNKAGADALJ, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_KJOIPCADIKA_DBCLNFHKPFK_OFFSET))(this, FPNKAGADALJ, PHHDHIBOCKA);
	}

	::System::Void CPBDLOEPPFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_KJOIPCADIKA_CPBDLOEPPFF_OFFSET))(this);
	}

	::System::Void ALDPMFOHGKN(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_KJOIPCADIKA_ALDPMFOHGKN_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}
};
