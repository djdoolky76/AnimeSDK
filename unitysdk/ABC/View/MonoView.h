#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ABC_VIEW_MONOVIEW_A27E68D79AE725E1_OFFSET UNITYSDK_OFFSET(0x26FD850)
#define ABC_VIEW_MONOVIEW_A7CC39DF74585F81_OFFSET UNITYSDK_OFFSET(0x26FD340)
#define ABC_VIEW_MONOVIEW_AD6592FFF4B71226_OFFSET UNITYSDK_OFFSET(0x26FD510)
#define ABC_VIEW_MONOVIEW_B1541B81D7F5C00F_OFFSET UNITYSDK_OFFSET(0x26FDB60)
#define ABC_VIEW_MONOVIEW_B855B300FECAF9B7_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define ABC_VIEW_MONOVIEW_BE6810ECF73DCF98_OFFSET UNITYSDK_OFFSET(0x26FDE50)
#define ABC_VIEW_MONOVIEW_E01A6E9608FD84CC_OFFSET UNITYSDK_OFFSET(0x26FD420)
#define ABC_VIEW_MONOVIEW_E1E2A604C6AAD9D9_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define ABC_VIEW_MONOVIEW_E5C230677F4BBE11_OFFSET UNITYSDK_OFFSET(0x26FD5F0)
#define ABC_VIEW_MONOVIEW_E796ED73EBA7CD5B_OFFSET UNITYSDK_OFFSET(0x26FD760)
#define ABC_VIEW_MONOVIEW_EA588F8D0870CA73_OFFSET UNITYSDK_OFFSET(0x26FDFD0)
#define ABC_VIEW_MONOVIEW_EFC426E6FE6B4C3D_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define ABC_VIEW_MONOVIEW_F1F563BF854CEFFD_OFFSET UNITYSDK_OFFSET(0x26FD6E0)
#define ABC_VIEW_MONOVIEW_F7DBB657562B4BF2_OFFSET UNITYSDK_OFFSET(0x26FD280)
#define ABC_VIEW_MONOVIEW_F8171226E9F07A14_OFFSET UNITYSDK_OFFSET(0x26FDCD0)
#define ABC_VIEW_MONOVIEW_FC446C9655F39F16_OFFSET UNITYSDK_OFFSET(0x169C070)
#define ABC_VIEW_MONOVIEW_FCD2E01436661EC7_OFFSET UNITYSDK_OFFSET(0x26FD9D0)
#define ABC_VIEW_MONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::View
{
	inline static constexpr unsigned int MonoView_TypeDefinitionIndex = 2828;

	class MonoView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* ACA448BCD8770EAD; // 0x20
		::UnityEngine::Transform* B02DF0A7602FB092; // 0x28

		::UnityEngine::GameObject* E1E2A604C6AAD9D9()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_E1E2A604C6AAD9D9_OFFSET))(this);
		}

		::System::Void B1541B81D7F5C00F(::UnityEngine::Quaternion A0556B8B541B6D55, ::System::Int32 B6BB6FC0D9169542)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_B1541B81D7F5C00F_OFFSET))(this, A0556B8B541B6D55, B6BB6FC0D9169542);
		}

		::System::Void AD6592FFF4B71226(::UnityEngine::Quaternion A0556B8B541B6D55)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_AD6592FFF4B71226_OFFSET))(this, A0556B8B541B6D55);
		}

		::System::Void E5C230677F4BBE11(::UnityEngine::Vector3 A73B96BE7F2DEBF7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_E5C230677F4BBE11_OFFSET))(this, A73B96BE7F2DEBF7);
		}

		::System::Void FCD2E01436661EC7(::UnityEngine::Vector3 EB211B01816ACA79, ::System::Boolean EED5641CD98BDF1F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_FCD2E01436661EC7_OFFSET))(this, EB211B01816ACA79, EED5641CD98BDF1F);
		}

		::System::Void A7CC39DF74585F81(::System::Boolean A3E26351629B9EF8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_A7CC39DF74585F81_OFFSET))(this, A3E26351629B9EF8);
		}

		::System::Void EFC426E6FE6B4C3D(::UnityEngine::GameObject* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_EFC426E6FE6B4C3D_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void EA588F8D0870CA73(::UnityEngine::Vector3 A73B96BE7F2DEBF7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_EA588F8D0870CA73_OFFSET))(this, A73B96BE7F2DEBF7);
		}

		::System::Void F7DBB657562B4BF2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_F7DBB657562B4BF2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Void A27E68D79AE725E1(::UnityEngine::Vector3 EB211B01816ACA79, ::System::Int32 B6BB6FC0D9169542)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_A27E68D79AE725E1_OFFSET))(this, EB211B01816ACA79, B6BB6FC0D9169542);
		}

		::System::Void F8171226E9F07A14(::UnityEngine::Quaternion A0556B8B541B6D55, ::System::Boolean EED5641CD98BDF1F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_F8171226E9F07A14_OFFSET))(this, A0556B8B541B6D55, EED5641CD98BDF1F);
		}

		::System::Void B855B300FECAF9B7(::UnityEngine::Transform* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_B855B300FECAF9B7_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Transform* FC446C9655F39F16()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_FC446C9655F39F16_OFFSET))(this);
		}

		::System::Void F1F563BF854CEFFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_F1F563BF854CEFFD_OFFSET))(this);
		}

		::System::Void E796ED73EBA7CD5B(::System::Boolean A3E26351629B9EF8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_E796ED73EBA7CD5B_OFFSET))(this, A3E26351629B9EF8);
		}

		::System::Void E01A6E9608FD84CC(::UnityEngine::Vector3 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_E01A6E9608FD84CC_OFFSET))(this, EB211B01816ACA79);
		}

		::System::Void BE6810ECF73DCF98(::UnityEngine::Vector3 A73B96BE7F2DEBF7, ::System::Int32 B6BB6FC0D9169542)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_VIEW_MONOVIEW_BE6810ECF73DCF98_OFFSET))(this, A73B96BE7F2DEBF7, B6BB6FC0D9169542);
		}
	};
}
