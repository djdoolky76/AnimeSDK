#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { template <typename T> class Action_1; }

#define JNMPLKMLMBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4C8DF0)
#define JNMPLKMLMBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C8ED0)
#define JNMPLKMLMBI_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x1B4C8D50)

inline static constexpr unsigned int JNMPLKMLMBI_TypeDefinitionIndex = 50818;

	class JNMPLKMLMBI : public ::System::Object
	{
	public:
		static ::System::Action_1<::LBJLBMOOJGM*>** StaticGet_BEJJCPGEMIG()
		{
			return (::System::Action_1<::LBJLBMOOJGM*>**)UnitySDK::FromName("", "JNMPLKMLMBI")->GetStaticField(0x28190);
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
