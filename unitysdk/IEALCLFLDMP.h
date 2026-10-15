#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFEKOONGJBL.h"
#include "unitysdk/System/Object.h"
class GOCNLGIDBLM;
class IEALCLFLDMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEALCLFLDMP_ALAFDLAJOKO_OFFSET UNITYSDK_OFFSET(0x1E633610)
#define IEALCLFLDMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E633AF0)
#define IEALCLFLDMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E633EB0)
#define IEALCLFLDMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6335B0)
#define IEALCLFLDMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E633480)
#define IEALCLFLDMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6333F0)
#define IEALCLFLDMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6336A0)
#define IEALCLFLDMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E633640)
#define IEALCLFLDMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6337F0)
#define IEALCLFLDMP_ICCLMJOFGLJ_OFFSET UNITYSDK_OFFSET(0x1E633600)
#define IEALCLFLDMP_IPJHCFJJABK_OFFSET UNITYSDK_OFFSET(0x1E633630)
#define IEALCLFLDMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E633380)
#define IEALCLFLDMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E633D60)
#define IEALCLFLDMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E633CA0)
#define IEALCLFLDMP_NLEDLHKHBLL_OFFSET UNITYSDK_OFFSET(0x1E633620)
#define IEALCLFLDMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6333E0)
#define IEALCLFLDMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E633940)
#define IEALCLFLDMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6339A0)

inline static constexpr unsigned int IEALCLFLDMP_TypeDefinitionIndex = 34385;

	class IEALCLFLDMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GOCNLGIDBLM*>* BGHCNKJGNIK; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AIJDFOCLAJE; // 0x20
		::GFEKOONGJBL HDGCAKFGHHM; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEALCLFLDMP")->GetStaticField(0x476B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CHMLNLANHFI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IEALCLFLDMP")->GetStaticField(0x476B8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KCNCEBACEKP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IEALCLFLDMP")->GetStaticField(0x476C0);
		}

		// static const ::System::Object IEHFFAALOIK; // 0x0
		// static const ::System::Object OFENLDDFPOI; // 0x0
		// static const ::System::Object KNJJICIFDHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEALCLFLDMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEALCLFLDMP*))((::PBYTE)hIl2Cpp + IEALCLFLDMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEALCLFLDMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEALCLFLDMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEALCLFLDMP* Clone()
		{
			return ((::IEALCLFLDMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GOCNLGIDBLM*>* ICCLMJOFGLJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GOCNLGIDBLM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_ICCLMJOFGLJ_OFFSET))(this);
		}

		::GFEKOONGJBL ALAFDLAJOKO()
		{
			return ((::GFEKOONGJBL(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_ALAFDLAJOKO_OFFSET))(this);
		}

		::System::Void NLEDLHKHBLL(::GFEKOONGJBL a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFEKOONGJBL))((::PBYTE)hIl2Cpp + IEALCLFLDMP_NLEDLHKHBLL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPJHCFJJABK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_IPJHCFJJABK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEALCLFLDMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEALCLFLDMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEALCLFLDMP*))((::PBYTE)hIl2Cpp + IEALCLFLDMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEALCLFLDMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEALCLFLDMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEALCLFLDMP*))((::PBYTE)hIl2Cpp + IEALCLFLDMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEALCLFLDMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
