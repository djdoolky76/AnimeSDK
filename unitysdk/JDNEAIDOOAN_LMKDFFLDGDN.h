#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GDHCJAOOKDB;
class HGGENLBDAPM;

#define JDNEAIDOOAN_LMKDFFLDGDN_CTOR_OFFSET UNITYSDK_OFFSET(0x2E851A0)
#define JDNEAIDOOAN_LMKDFFLDGDN_GDKGAGKKAJP_OFFSET UNITYSDK_OFFSET(0x1660E720)

inline static constexpr unsigned int JDNEAIDOOAN_LMKDFFLDGDN_TypeDefinitionIndex = 48940;

	struct alignas(8) JDNEAIDOOAN_LMKDFFLDGDN
	{
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::System::Byte _padding0[0x4];
		::HGGENLBDAPM* JCHFCNFHCMM; // 0x20
		::System::Boolean CHIOEJFLMKD; // 0x28
		::System::Byte _padding1[0x7];
		::GDHCJAOOKDB* OLNAOJPNNGJ; // 0x30
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::HGGENLBDAPM* a2, ::System::Boolean a3, ::GDHCJAOOKDB* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::HGGENLBDAPM*, ::System::Boolean, ::GDHCJAOOKDB*))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_LMKDFFLDGDN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		static ::JDNEAIDOOAN_LMKDFFLDGDN GDKGAGKKAJP(::UnityEngine::Vector3 a1)
		{
			return ((::JDNEAIDOOAN_LMKDFFLDGDN(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_LMKDFFLDGDN_GDKGAGKKAJP_OFFSET))(a1);
		}
		*/

	};
