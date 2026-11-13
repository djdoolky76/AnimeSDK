#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFMDLLDIHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOFMDLLDIHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201AA2D0)
#define AOFMDLLDIHG_CCFKAKLNPIK_OFFSET UNITYSDK_OFFSET(0x201A9880)
#define AOFMDLLDIHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x201AA5A0)
#define AOFMDLLDIHG_CLONE_OFFSET UNITYSDK_OFFSET(0x201A97E0)
#define AOFMDLLDIHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201A9730)
#define AOFMDLLDIHG_CTOR_OFFSET UNITYSDK_OFFSET(0x201A96E0)
#define AOFMDLLDIHG_DPGDICFGIAG_OFFSET UNITYSDK_OFFSET(0x201A9830)
#define AOFMDLLDIHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201A98D0)
#define AOFMDLLDIHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x201A98A0)
#define AOFMDLLDIHG_FBMKNCACCGD_OFFSET UNITYSDK_OFFSET(0x201A9840)
#define AOFMDLLDIHG_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x201A9810)
#define AOFMDLLDIHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201A9C30)
#define AOFMDLLDIHG_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x201A9870)
#define AOFMDLLDIHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201A96A0)
#define AOFMDLLDIHG_KJBDBPBIIBF_OFFSET UNITYSDK_OFFSET(0x201A9850)
#define AOFMDLLDIHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201AA490)
#define AOFMDLLDIHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201AA3F0)
#define AOFMDLLDIHG_NABGOENFBHK_OFFSET UNITYSDK_OFFSET(0x201A9890)
#define AOFMDLLDIHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201A96D0)
#define AOFMDLLDIHG_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x201A9860)
#define AOFMDLLDIHG_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x201A9820)
#define AOFMDLLDIHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201AA040)
#define AOFMDLLDIHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x201AA0A0)

inline static constexpr unsigned int AOFMDLLDIHG_TypeDefinitionIndex = 25928;

	class AOFMDLLDIHG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKAGCEJIBEN; // 0x18
		::System::Double GIBIHEPFIMM; // 0x20
		::System::Double EEFAOKNJGJK; // 0x28
		::System::Double BCLKCLDFMOA; // 0x30
		::System::UInt32 DBDCJHECJOO; // 0x38
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MNCHCOFMDMM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "AOFMDLLDIHG")->GetStaticField(0x3D360);
		}

		static ::Google::Protobuf::MessageParser_1<::AOFMDLLDIHG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOFMDLLDIHG*>**)UnitySDK::FromName("", "AOFMDLLDIHG")->GetStaticField(0x3D368);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object PFIEAJFDPKN; // 0x0
		// static const ::System::Object AIICFPIDLIB; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object GPLOOALBDFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOFMDLLDIHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFMDLLDIHG*))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOFMDLLDIHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOFMDLLDIHG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOFMDLLDIHG*>*(*)())((::PBYTE)hIl2Cpp + AOFMDLLDIHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOFMDLLDIHG* Clone()
		{
			return ((::AOFMDLLDIHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::Double DPGDICFGIAG()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_DPGDICFGIAG_OFFSET))(this);
		}

		::System::Void FBMKNCACCGD(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_FBMKNCACCGD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KJBDBPBIIBF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_KJBDBPBIIBF_OFFSET))(this);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Double CCFKAKLNPIK()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_CCFKAKLNPIK_OFFSET))(this);
		}

		::System::Void NABGOENFBHK(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_NABGOENFBHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOFMDLLDIHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOFMDLLDIHG*))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOFMDLLDIHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFMDLLDIHG*))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOFMDLLDIHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
