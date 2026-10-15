#pragma once
#include "unitysdk/unitysdk.h"
class FCOEMCEDLNL;
class IACGHDENOPA;
class POGMNKLPKGM;
namespace System { class Object; }
namespace System { class String; }

#define POGMNKLPKGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D316D10)
#define POGMNKLPKGM_CREATENATIVEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D316C50)
#define POGMNKLPKGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F0D30)
#define POGMNKLPKGM_READROW_OFFSET UNITYSDK_OFFSET(0x1D316CB0)

	class POGMNKLPKGM
	{
	public:
		static ::IACGHDENOPA** StaticGet_LLFPDGEEGCD()
		{
			return (::IACGHDENOPA**)UnitySDK::FromName("", "POGMNKLPKGM")->GetStaticField(0x2CB10);
		}

		static ::POGMNKLPKGM** StaticGet_OBNANPFLCOO()
		{
			return (::POGMNKLPKGM**)UnitySDK::FromName("", "POGMNKLPKGM")->GetStaticField(0x2CB18);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + POGMNKLPKGM_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POGMNKLPKGM_CCTOR_OFFSET))();
		}

		::IACGHDENOPA* CreateNativeDictionary(::System::Int32 a1)
		{
			return ((::IACGHDENOPA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POGMNKLPKGM_CREATENATIVEDICTIONARY_OFFSET))(this, a1);
		}

		::System::Void ReadRow(::FCOEMCEDLNL* a1, ::System::UInt64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::PVOID, ::FCOEMCEDLNL*, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + POGMNKLPKGM_READROW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
