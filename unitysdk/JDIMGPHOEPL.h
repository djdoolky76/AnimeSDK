#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJHAHOLEGH;
class GCLPBMPOHLI;
class JDIMGPHOEPL;
class NGLOBFBCGBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDIMGPHOEPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E70BA80)
#define JDIMGPHOEPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70BF80)
#define JDIMGPHOEPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70B650)
#define JDIMGPHOEPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70B590)
#define JDIMGPHOEPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70B4F0)
#define JDIMGPHOEPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70B6E0)
#define JDIMGPHOEPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70B6B0)
#define JDIMGPHOEPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E70B850)
#define JDIMGPHOEPL_IGOCKPPEEDE_OFFSET UNITYSDK_OFFSET(0x1E70B6A0)
#define JDIMGPHOEPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70B4B0)
#define JDIMGPHOEPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E70BCE0)
#define JDIMGPHOEPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E70BB90)
#define JDIMGPHOEPL_MNEOPLOFIJP_OFFSET UNITYSDK_OFFSET(0x1E70B690)
#define JDIMGPHOEPL_NMJDEEKBACE_OFFSET UNITYSDK_OFFSET(0x1E70B680)
#define JDIMGPHOEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70B4E0)
#define JDIMGPHOEPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E70B900)
#define JDIMGPHOEPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E70B960)

inline static constexpr unsigned int JDIMGPHOEPL_TypeDefinitionIndex = 31325;

	class JDIMGPHOEPL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GCLPBMPOHLI*>* ONCCLKECMOG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>* HFMEFEKDMLA; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>* CIHFHHGGAON; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::BMJHAHOLEGH*>** StaticGet_IGPABHLCEFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::BMJHAHOLEGH*>**)UnitySDK::FromName("", "JDIMGPHOEPL")->GetStaticField(0x5DDC0);
		}

		static ::Google::Protobuf::FieldCodec_1<::NGLOBFBCGBB*>** StaticGet_OACCMGBAPJG()
		{
			return (::Google::Protobuf::FieldCodec_1<::NGLOBFBCGBB*>**)UnitySDK::FromName("", "JDIMGPHOEPL")->GetStaticField(0x5DDC8);
		}

		static ::Google::Protobuf::MessageParser_1<::JDIMGPHOEPL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDIMGPHOEPL*>**)UnitySDK::FromName("", "JDIMGPHOEPL")->GetStaticField(0x5DDD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::GCLPBMPOHLI*>** StaticGet_OPPCJKEHDDO()
		{
			return (::Google::Protobuf::FieldCodec_1<::GCLPBMPOHLI*>**)UnitySDK::FromName("", "JDIMGPHOEPL")->GetStaticField(0x5DDD8);
		}

		// static const ::System::Object CCDOCCHIADJ; // 0x0
		// static const ::System::Object BOOLNNFAGNK; // 0x0
		// static const ::System::Object KFADEGKFLDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDIMGPHOEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDIMGPHOEPL*))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDIMGPHOEPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDIMGPHOEPL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDIMGPHOEPL*>*(*)())((::PBYTE)hIl2Cpp + JDIMGPHOEPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDIMGPHOEPL* Clone()
		{
			return ((::JDIMGPHOEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>* NMJDEEKBACE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_NMJDEEKBACE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>* MNEOPLOFIJP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NGLOBFBCGBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_MNEOPLOFIJP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GCLPBMPOHLI*>* IGOCKPPEEDE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GCLPBMPOHLI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_IGOCKPPEEDE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDIMGPHOEPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDIMGPHOEPL*))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDIMGPHOEPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDIMGPHOEPL*))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDIMGPHOEPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
