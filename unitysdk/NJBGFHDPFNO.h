#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJBGFHDPFNO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJBGFHDPFNO_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1EB0CF40)
#define NJBGFHDPFNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB0D2C0)
#define NJBGFHDPFNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D590)
#define NJBGFHDPFNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB0CEC0)
#define NJBGFHDPFNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB0CE90)
#define NJBGFHDPFNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0CE80)
#define NJBGFHDPFNO_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x1EB0CF50)
#define NJBGFHDPFNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB0D080)
#define NJBGFHDPFNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB0CF70)
#define NJBGFHDPFNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB0D150)
#define NJBGFHDPFNO_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1EB0CF30)
#define NJBGFHDPFNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB0CE10)
#define NJBGFHDPFNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB0D410)
#define NJBGFHDPFNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB0D3D0)
#define NJBGFHDPFNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB0CE70)
#define NJBGFHDPFNO_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x1EB0CF60)
#define NJBGFHDPFNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB0D180)
#define NJBGFHDPFNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB0D1E0)

inline static constexpr unsigned int NJBGFHDPFNO_TypeDefinitionIndex = 29188;

	class NJBGFHDPFNO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		::System::UInt32 NNLJKKAEICI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NJBGFHDPFNO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJBGFHDPFNO*>**)UnitySDK::FromName("", "NJBGFHDPFNO")->GetStaticField(0x686B0);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object BFMLFALLFGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJBGFHDPFNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJBGFHDPFNO*))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJBGFHDPFNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJBGFHDPFNO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJBGFHDPFNO*>*(*)())((::PBYTE)hIl2Cpp + NJBGFHDPFNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJBGFHDPFNO* Clone()
		{
			return ((::NJBGFHDPFNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJBGFHDPFNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJBGFHDPFNO*))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJBGFHDPFNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJBGFHDPFNO*))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJBGFHDPFNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
