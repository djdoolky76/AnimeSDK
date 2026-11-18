#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define EBNNMKFIOFD_JPHMIGDOKKI_OFFSET UNITYSDK_OFFSET(0x1588CBE0)
#define EBNNMKFIOFD_ODPPBBAIGLF_OFFSET UNITYSDK_OFFSET(0x1588CC80)
#define EBNNMKFIOFD_PDKCAHJOFJN_OFFSET UNITYSDK_OFFSET(0x1588CC70)
#define EBNNMKFIOFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1588CAE0)

inline static constexpr unsigned int EBNNMKFIOFD_TypeDefinitionIndex = 57641;

class EBNNMKFIOFD : public ::System::Object
{
public:
	::UnityEngine::Transform* LIDLOIDCBNA; // 0x10
	::System::String* IPHFEENNJDK; // 0x18
	::System::Action_2<::System::Boolean, ::System::String*>* FBEBEHNGDPG; // 0x20
	::LGINJIKKBJA* PHDLHCELKKC; // 0x28
	::System::Boolean CMGKIDONKKF; // 0x30

	::System::Void _ctor(::System::Boolean HMFEKIJNLNH, ::LGINJIKKBJA* JEPEJDNMFOK, ::UnityEngine::Transform* HEEEBFPEIKE, ::System::String* JAOIHBNAKMM, ::System::Action_2<::System::Boolean, ::System::String*>* BFOMBFMONJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::LGINJIKKBJA*, ::UnityEngine::Transform*, ::System::String*, ::System::Action_2<::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + EBNNMKFIOFD__CTOR_OFFSET))(this, HMFEKIJNLNH, JEPEJDNMFOK, HEEEBFPEIKE, JAOIHBNAKMM, BFOMBFMONJG);
	}

	::System::Void JPHMIGDOKKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNNMKFIOFD_JPHMIGDOKKI_OFFSET))(this);
	}

	::System::Boolean PDKCAHJOFJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNNMKFIOFD_PDKCAHJOFJN_OFFSET))(this);
	}

	::System::Void ODPPBBAIGLF(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBNNMKFIOFD_ODPPBBAIGLF_OFFSET))(this, LIEJIGMGGOL);
	}
};
