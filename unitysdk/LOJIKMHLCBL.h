#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOJIKMHLCBL;
class MGBAOABEEAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOJIKMHLCBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C2610)
#define LOJIKMHLCBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C28E0)
#define LOJIKMHLCBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C2190)
#define LOJIKMHLCBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C20E0)
#define LOJIKMHLCBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2090)
#define LOJIKMHLCBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C2370)
#define LOJIKMHLCBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C21F0)
#define LOJIKMHLCBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C2490)
#define LOJIKMHLCBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C2020)
#define LOJIKMHLCBL_KCMHOJHDGGE_OFFSET UNITYSDK_OFFSET(0x1E9C21E0)
#define LOJIKMHLCBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C2720)
#define LOJIKMHLCBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C26B0)
#define LOJIKMHLCBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2080)
#define LOJIKMHLCBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C2500)
#define LOJIKMHLCBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C2560)

inline static constexpr unsigned int LOJIKMHLCBL_TypeDefinitionIndex = 25179;

	class LOJIKMHLCBL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::MGBAOABEEAG*>* MOBDMGGJCAN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LOJIKMHLCBL")->GetStaticField(0x4D3E0);
		}

		static ::System::Object** StaticGet_JNJKPEIHEEK()
		{
			return (::System::Object**)UnitySDK::FromName("", "LOJIKMHLCBL")->GetStaticField(0x4D3E8);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LOJIKMHLCBL_JJGHOBBFNJD_OFFSET))();
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
