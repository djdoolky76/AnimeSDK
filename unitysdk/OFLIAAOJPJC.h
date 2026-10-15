#pragma once
#include "unitysdk/unitysdk.h"
class FCOEMCEDLNL;
class IACGHDENOPA;
class OFLIAAOJPJC;
namespace System { class Object; }
namespace System { class String; }

#define OFLIAAOJPJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D23C570)
#define OFLIAAOJPJC_CREATENATIVEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D23C4B0)
#define OFLIAAOJPJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23C460)
#define OFLIAAOJPJC_READROW_OFFSET UNITYSDK_OFFSET(0x1D23C510)

inline static constexpr unsigned int OFLIAAOJPJC_TypeDefinitionIndex = 10830;

	class OFLIAAOJPJC
	{
	public:
		static ::IACGHDENOPA** StaticGet_LLFPDGEEGCD()
		{
			return (::IACGHDENOPA**)UnitySDK::FromName("", "OFLIAAOJPJC")->GetStaticField(0x14940);
		}

		static ::OFLIAAOJPJC** StaticGet_OBNANPFLCOO()
		{
			return (::OFLIAAOJPJC**)UnitySDK::FromName("", "OFLIAAOJPJC")->GetStaticField(0x14948);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OFLIAAOJPJC_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFLIAAOJPJC_CCTOR_OFFSET))();
		}

		::IACGHDENOPA* CreateNativeDictionary(::System::Int32 a1)
		{
			return ((::IACGHDENOPA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFLIAAOJPJC_CREATENATIVEDICTIONARY_OFFSET))(this, a1);
		}

		::System::Void ReadRow(::FCOEMCEDLNL* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::PVOID, ::FCOEMCEDLNL*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + OFLIAAOJPJC_READROW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
