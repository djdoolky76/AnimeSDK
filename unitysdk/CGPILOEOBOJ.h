#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

#define CGPILOEOBOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8D7F0)
#define CGPILOEOBOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC8D400)
#define CGPILOEOBOJ_NINEHEEGBEG_OFFSET UNITYSDK_OFFSET(0xCC8D440)

	class CGPILOEOBOJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPILOEOBOJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPILOEOBOJ_DISPOSE_OFFSET))(this);
		}

		::System::Void NINEHEEGBEG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGPILOEOBOJ_NINEHEEGBEG_OFFSET))(this, a1);
		}

	};
