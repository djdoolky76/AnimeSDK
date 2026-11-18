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

#define MBBCFJKMFNF_FKOBCGHEIIC_ALDPMFOHGKN_OFFSET UNITYSDK_OFFSET(0x15691290)
#define MBBCFJKMFNF_FKOBCGHEIIC_CPBDLOEPPFF_OFFSET UNITYSDK_OFFSET(0x156915F0)
#define MBBCFJKMFNF_FKOBCGHEIIC_DBCLNFHKPFK_OFFSET UNITYSDK_OFFSET(0x15691320)
#define MBBCFJKMFNF_FKOBCGHEIIC__CTOR_OFFSET UNITYSDK_OFFSET(0x15691280)

inline static constexpr unsigned int MBBCFJKMFNF_FKOBCGHEIIC_TypeDefinitionIndex = 73973;

class MBBCFJKMFNF_FKOBCGHEIIC : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* NKIFJCDNCFI; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18
	::UnityEngine::UI::Image* DNKEKDIEAMH; // 0x28
	::System::Action* NHGFOKGBFJA; // 0x30
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* FBNAOKBGHJJ; // 0x38
	::MBBCFJKMFNF* KLHPEBKNIFB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_FKOBCGHEIIC__CTOR_OFFSET))(this);
	}

	::System::Void ALDPMFOHGKN(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_FKOBCGHEIIC_ALDPMFOHGKN_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}

	::System::Void DBCLNFHKPFK(::UnityEngine::Sprite* FPNKAGADALJ, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_FKOBCGHEIIC_DBCLNFHKPFK_OFFSET))(this, FPNKAGADALJ, PHHDHIBOCKA);
	}

	::System::Void CPBDLOEPPFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBCFJKMFNF_FKOBCGHEIIC_CPBDLOEPPFF_OFFSET))(this);
	}
};
