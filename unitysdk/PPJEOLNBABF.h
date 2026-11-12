#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define PPJEOLNBABF_CCTOR_OFFSET UNITYSDK_OFFSET(0xCCC19E0)
#define PPJEOLNBABF_CTOR_OFFSET UNITYSDK_OFFSET(0xCCC1620)
#define PPJEOLNBABF_GET_FINISH_OFFSET UNITYSDK_OFFSET(0xCCC19C0)
#define PPJEOLNBABF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCCC1790)
#define PPJEOLNBABF_SET_FINISH_OFFSET UNITYSDK_OFFSET(0xCCC19D0)

inline static constexpr unsigned int PPJEOLNBABF_TypeDefinitionIndex = 81263;

	class PPJEOLNBABF : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Color>* NJCPOOIKDGH; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* BOMHPPBMBPN; // 0x18
		::UnityEngine::LineRenderer* ONEFCLJPGLE; // 0x20
		::System::Single PMHMEGEJDGP; // 0x28
		::System::Single ELCEJCOGOFJ; // 0x2C
		::System::Boolean _Finish_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single IEHPFADHJFD; // 0x34
		static ::System::Int32* StaticGet_MFEFDCONKCC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PPJEOLNBABF")->GetStaticField(0x1660);
		}

		::System::Void _ctor(::UnityEngine::LineRenderer* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PPJEOLNBABF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJEOLNBABF_CCTOR_OFFSET))();
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPJEOLNBABF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean get_Finish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJEOLNBABF_GET_FINISH_OFFSET))(this);
		}

		::System::Void set_Finish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPJEOLNBABF_SET_FINISH_OFFSET))(this, a1);
		}

	};
