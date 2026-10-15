#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_BITS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE937D0)
#define SYSTEM_XML_BITS_COUNT_OFFSET UNITYSDK_OFFSET(0x1EE93610)
#define SYSTEM_XML_BITS_LEASTPOSITION_OFFSET UNITYSDK_OFFSET(0x1EE936B0)

namespace System::Xml
{
	class Bits : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_MASK_1111111111111111()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Xml", "Bits")->GetStaticField(0x7380);
		}

		static ::System::UInt32* StaticGet_MASK_0000111100001111()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Xml", "Bits")->GetStaticField(0x7384);
		}

		static ::System::UInt32* StaticGet_MASK_0000000011111111()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Xml", "Bits")->GetStaticField(0x7388);
		}

		static ::System::UInt32* StaticGet_MASK_0101010101010101()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Xml", "Bits")->GetStaticField(0x738C);
		}

		static ::System::UInt32* StaticGet_MASK_0011001100110011()
		{
			return (::System::UInt32*)UnitySDK::FromName("System.Xml", "Bits")->GetStaticField(0x7390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS_CCTOR_OFFSET))();
		}

		static ::System::Int32 Count(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS_COUNT_OFFSET))(a1);
		}

		static ::System::Int32 LeastPosition(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS_LEASTPOSITION_OFFSET))(a1);
		}

	};
}
