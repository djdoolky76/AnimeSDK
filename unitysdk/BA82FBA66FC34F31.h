#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkEnvironment;
class AkEnvironmentPortal;
class FBEC84F042B2B365;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define BA82FBA66FC34F31_A08EFA8FCD9EDCD3_OFFSET UNITYSDK_OFFSET(0x2917D30)
#define BA82FBA66FC34F31_AEF174BE70B13B88_OFFSET UNITYSDK_OFFSET(0x2918570)
#define BA82FBA66FC34F31_B631DE11291175D9_OFFSET UNITYSDK_OFFSET(0x2917E90)
#define BA82FBA66FC34F31_BAA230EE5AE48EA1_OFFSET UNITYSDK_OFFSET(0x2918380)
#define BA82FBA66FC34F31_BB16DDB6AC4027C1_OFFSET UNITYSDK_OFFSET(0x2918400)
#define BA82FBA66FC34F31_E74375157683FB8F_OFFSET UNITYSDK_OFFSET(0x2917FB0)
#define BA82FBA66FC34F31_F7DACF49E75ABA36_OFFSET UNITYSDK_OFFSET(0x2917880)
#define BA82FBA66FC34F31_FE355DCE7E795B8D_OFFSET UNITYSDK_OFFSET(0x29179C0)
#define BA82FBA66FC34F31__CTOR_OFFSET UNITYSDK_OFFSET(0x29187E0)

inline static constexpr unsigned int BA82FBA66FC34F31_TypeDefinitionIndex = 20440;

class BA82FBA66FC34F31 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AkEnvironment*>* B8F7E4248C4541C9; // 0x10
	::System::Collections::Generic::List_1<::AkEnvironment*>* F98B56505EE8C45B; // 0x18
	::System::Collections::Generic::List_1<::AkEnvironmentPortal*>* EFCB2B5D0AA79CC0; // 0x20
	::FBEC84F042B2B365* FA5FCBBB20CBFE00; // 0x28
	::UnityEngine::Vector3 FCC1106B65E67AD9; // 0x30
	::System::Boolean A65D696C1F3E6339; // 0x3C
	::System::Boolean E6EA3B033B4FC99F; // 0x3D
	::System::Boolean A87A9F1B28AEF309; // 0x3E

	::System::Void E74375157683FB8F(::UnityEngine::Collider* B9047DB498D0AE0D, ::UnityEngine::Collider* AA8C2458F4F60FDC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31_E74375157683FB8F_OFFSET))(this, B9047DB498D0AE0D, AA8C2458F4F60FDC);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31__CTOR_OFFSET))(this);
	}

	::System::Boolean B631DE11291175D9(::AkEnvironment* F01B486E65E8AFEB)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31_B631DE11291175D9_OFFSET))(this, F01B486E65E8AFEB);
	}

	::System::Void BAA230EE5AE48EA1(::AkEnvironment* F01B486E65E8AFEB)
	{
		return ((::System::Void(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31_BAA230EE5AE48EA1_OFFSET))(this, F01B486E65E8AFEB);
	}

	::System::Void F7DACF49E75ABA36(::UnityEngine::Collider* B9047DB498D0AE0D, ::UnityEngine::Collider* AA8C2458F4F60FDC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31_F7DACF49E75ABA36_OFFSET))(this, B9047DB498D0AE0D, AA8C2458F4F60FDC);
	}

	::System::Void FE355DCE7E795B8D(::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31_FE355DCE7E795B8D_OFFSET))(this, EB211B01816ACA79);
	}

	::System::Void BB16DDB6AC4027C1(::AkEnvironment* F01B486E65E8AFEB)
	{
		return ((::System::Void(*)(::PVOID, ::AkEnvironment*))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31_BB16DDB6AC4027C1_OFFSET))(this, F01B486E65E8AFEB);
	}

	::System::Void A08EFA8FCD9EDCD3(::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31_A08EFA8FCD9EDCD3_OFFSET))(this, EB211B01816ACA79);
	}

	::System::Void AEF174BE70B13B88(::UnityEngine::GameObject* BC63F4052E4478D7, ::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BA82FBA66FC34F31_AEF174BE70B13B88_OFFSET))(this, BC63F4052E4478D7, EB211B01816ACA79);
	}
};
