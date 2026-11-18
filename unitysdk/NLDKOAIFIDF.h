#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define NLDKOAIFIDF_DJJEFFFAPLF_OFFSET UNITYSDK_OFFSET(0xED31320)
#define NLDKOAIFIDF_JPHMIGDOKKI_OFFSET UNITYSDK_OFFSET(0xED31330)
#define NLDKOAIFIDF_ODPPBBAIGLF_OFFSET UNITYSDK_OFFSET(0xED313C0)
#define NLDKOAIFIDF__CTOR_OFFSET UNITYSDK_OFFSET(0xED31220)

inline static constexpr unsigned int NLDKOAIFIDF_TypeDefinitionIndex = 91416;

class NLDKOAIFIDF : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::System::String*>* FBEBEHNGDPG; // 0x10
	::LGINJIKKBJA* PHDLHCELKKC; // 0x18
	::System::String* IPHFEENNJDK; // 0x20
	::UnityEngine::Transform* LIDLOIDCBNA; // 0x28
	::System::Boolean JAJABDOEEFH; // 0x30

	::System::Void _ctor(::System::Boolean DGNKEDPOHGB, ::LGINJIKKBJA* JEPEJDNMFOK, ::UnityEngine::Transform* HEEEBFPEIKE, ::System::String* JAOIHBNAKMM, ::System::Action_2<::System::Boolean, ::System::String*>* BFOMBFMONJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::LGINJIKKBJA*, ::UnityEngine::Transform*, ::System::String*, ::System::Action_2<::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + NLDKOAIFIDF__CTOR_OFFSET))(this, DGNKEDPOHGB, JEPEJDNMFOK, HEEEBFPEIKE, JAOIHBNAKMM, BFOMBFMONJG);
	}

	::System::Boolean DJJEFFFAPLF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDKOAIFIDF_DJJEFFFAPLF_OFFSET))(this);
	}

	::System::Void JPHMIGDOKKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDKOAIFIDF_JPHMIGDOKKI_OFFSET))(this);
	}

	::System::Void ODPPBBAIGLF(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLDKOAIFIDF_ODPPBBAIGLF_OFFSET))(this, LIEJIGMGGOL);
	}
};
