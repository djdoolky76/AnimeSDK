#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOJIKMHLCBL;
class MGBAOABEEAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOJIKMHLCBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E994F40)
#define LOJIKMHLCBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E995210)
#define LOJIKMHLCBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E994AC0)
#define LOJIKMHLCBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E994A10)
#define LOJIKMHLCBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9949C0)
#define LOJIKMHLCBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E994CA0)
#define LOJIKMHLCBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E994B20)
#define LOJIKMHLCBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E994DC0)
#define LOJIKMHLCBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E994950)
#define LOJIKMHLCBL_KCMHOJHDGGE_OFFSET UNITYSDK_OFFSET(0x1E994B10)
#define LOJIKMHLCBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E995050)
#define LOJIKMHLCBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E994FE0)
#define LOJIKMHLCBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9949B0)
#define LOJIKMHLCBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E994E30)
#define LOJIKMHLCBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E994E90)

inline static constexpr unsigned int LOJIKMHLCBL_TypeDefinitionIndex = 25179;

	class LOJIKMHLCBL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::MGBAOABEEAG*>* MOBDMGGJCAN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::System::Object** StaticGet_JNJKPEIHEEK()
		{
			return (::System::Object**)UnitySDK::FromName("", "LOJIKMHLCBL")->GetStaticField(0x42360);
		}

		static ::Google::Protobuf::MessageParser_1<::LOJIKMHLCBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOJIKMHLCBL*>**)UnitySDK::FromName("", "LOJIKMHLCBL")->GetStaticField(0x42368);
		}

		// static const ::System::Object HFAHBAHMLEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOJIKMHLCBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOJIKMHLCBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOJIKMHLCBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOJIKMHLCBL*>*(*)())((::PBYTE)hIl2Cpp + LOJIKMHLCBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOJIKMHLCBL* Clone()
		{
			return ((::LOJIKMHLCBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::MGBAOABEEAG*>* KCMHOJHDGGE()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::MGBAOABEEAG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_KCMHOJHDGGE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOJIKMHLCBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOJIKMHLCBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOJIKMHLCBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
