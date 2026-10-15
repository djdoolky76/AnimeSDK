#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Action; }

#define JNMPLKMLMBI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB28DFE0)
#define JNMPLKMLMBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB28E0C0)
#define JNMPLKMLMBI_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xB28DF40)

inline static constexpr unsigned int JNMPLKMLMBI_TypeDefinitionIndex = 49770;

	class JNMPLKMLMBI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_BEJJCPGEMIG()
		{
			return (::System::Action**)UnitySDK::FromName("", "JNMPLKMLMBI")->GetStaticField(0x23200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNMPLKMLMBI_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMPLKMLMBI_CTOR_OFFSET))(this);
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + JNMPLKMLMBI_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};
