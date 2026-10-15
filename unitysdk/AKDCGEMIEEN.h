#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHJEGBMIKEJ.h"

#define AKDCGEMIEEN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCC600)

	class AKDCGEMIEEN : public ::BHJEGBMIKEJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDCGEMIEEN_CTOR_OFFSET))(this);
		}

	};
