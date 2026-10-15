#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGHLHHJEGE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMGHLHHJEGE_AOHNBPBEEOO_OFFSET UNITYSDK_OFFSET(0x1E025900)
#define BMGHLHHJEGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E025CA0)
#define BMGHLHHJEGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E025F00)
#define BMGHLHHJEGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E025850)
#define BMGHLHHJEGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E025810)
#define BMGHLHHJEGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E025800)
#define BMGHLHHJEGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E025A20)
#define BMGHLHHJEGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E025910)
#define BMGHLHHJEGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E025B00)
#define BMGHLHHJEGE_IMGJKLCIGEL_OFFSET UNITYSDK_OFFSET(0x1E0258D0)
#define BMGHLHHJEGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E025790)
#define BMGHLHHJEGE_KEAMOOCIGIJ_OFFSET UNITYSDK_OFFSET(0x1E0258F0)
#define BMGHLHHJEGE_MDGCDKHDKEB_OFFSET UNITYSDK_OFFSET(0x1E0258E0)
#define BMGHLHHJEGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E025D80)
#define BMGHLHHJEGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E025D40)
#define BMGHLHHJEGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0257F0)
#define BMGHLHHJEGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E025B30)
#define BMGHLHHJEGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E025B90)

	class BMGHLHHJEGE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean OFAKEMKNCKG; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ONPFGKIELHM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMGHLHHJEGE")->GetStaticField(0x4CE80);
		}

		// static const ::System::Object NDBLLNDJADG; // 0x0
		// static const ::System::Object DGJOOLFNFMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMGHLHHJEGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGHLHHJEGE*))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGHLHHJEGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMGHLHHJEGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMGHLHHJEGE* Clone()
		{
			return ((::BMGHLHHJEGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_CLONE_OFFSET))(this);
		}

		::System::UInt32 IMGJKLCIGEL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_IMGJKLCIGEL_OFFSET))(this);
		}

		::System::Void MDGCDKHDKEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_MDGCDKHDKEB_OFFSET))(this, a1);
		}

		::System::Boolean KEAMOOCIGIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_KEAMOOCIGIJ_OFFSET))(this);
		}

		::System::Void AOHNBPBEEOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_AOHNBPBEEOO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMGHLHHJEGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMGHLHHJEGE*))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMGHLHHJEGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGHLHHJEGE*))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMGHLHHJEGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
