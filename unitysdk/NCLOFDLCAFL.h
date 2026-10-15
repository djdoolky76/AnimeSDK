#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;

#define NCLOFDLCAFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB163E0)
#define NCLOFDLCAFL_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBB16380)

	class NCLOFDLCAFL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLOFDLCAFL_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Int32 a1, ::KAKADGHNMFK* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KAKADGHNMFK*, ::System::Int32))((::PBYTE)hIl2Cpp + NCLOFDLCAFL_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

	};
