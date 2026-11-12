#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
class BGLEHLDOFPP;

#define LOIFHOHCBMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DACAFE0)
#define LOIFHOHCBMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB91A0)
#define LOIFHOHCBMH_FIINCIFMGFA_OFFSET UNITYSDK_OFFSET(0x1DAB8CB0)
#define LOIFHOHCBMH_GOOPHBCIMPB_OFFSET UNITYSDK_OFFSET(0x1DACADC0)
#define LOIFHOHCBMH_IKLGLKAMCBI_OFFSET UNITYSDK_OFFSET(0x1DACAE20)
#define LOIFHOHCBMH_OFMPHGGOLAB_OFFSET UNITYSDK_OFFSET(0x1DACAE80)

inline static constexpr unsigned int LOIFHOHCBMH_TypeDefinitionIndex = 43613;

	class LOIFHOHCBMH : public ::Entitas::Entity
	{
	public:
		static ::BGLEHLDOFPP** StaticGet_KFBGNFIPFGP()
		{
			return (::BGLEHLDOFPP**)UnitySDK::FromName("", "LOIFHOHCBMH")->GetStaticField(0x4EDB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIFHOHCBMH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOIFHOHCBMH_CCTOR_OFFSET))();
		}

		::System::Boolean GOOPHBCIMPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIFHOHCBMH_GOOPHBCIMPB_OFFSET))(this);
		}

		::System::Void FIINCIFMGFA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOIFHOHCBMH_FIINCIFMGFA_OFFSET))(this, a1);
		}

		::System::Boolean IKLGLKAMCBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIFHOHCBMH_IKLGLKAMCBI_OFFSET))(this);
		}

		::System::Void OFMPHGGOLAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOIFHOHCBMH_OFMPHGGOLAB_OFFSET))(this, a1);
		}

	};
