#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKGDGBHHPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHKGDGBHHPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E846590)
#define KHKGDGBHHPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8467F0)
#define KHKGDGBHHPK_CFEBPLMAAMP_OFFSET UNITYSDK_OFFSET(0x1E846200)
#define KHKGDGBHHPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8461A0)
#define KHKGDGBHHPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E846160)
#define KHKGDGBHHPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E846150)
#define KHKGDGBHHPK_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1E846210)
#define KHKGDGBHHPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E846310)
#define KHKGDGBHHPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E846230)
#define KHKGDGBHHPK_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1E846220)
#define KHKGDGBHHPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8463F0)
#define KHKGDGBHHPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E846110)
#define KHKGDGBHHPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E846670)
#define KHKGDGBHHPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E846630)
#define KHKGDGBHHPK_MOAFAHCIPGB_OFFSET UNITYSDK_OFFSET(0x1E8461F0)
#define KHKGDGBHHPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E846140)
#define KHKGDGBHHPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E846420)
#define KHKGDGBHHPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E846480)

	class KHKGDGBHHPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NIAOPCJHKCG; // 0x18
		::System::Boolean OHMIEOFJLDB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KHKGDGBHHPK")->GetStaticField(0x176A0);
		}

		// static const ::System::Object GIJDMNPMPON; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHKGDGBHHPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHKGDGBHHPK*))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKGDGBHHPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KHKGDGBHHPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHKGDGBHHPK* Clone()
		{
			return ((::KHKGDGBHHPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_CLONE_OFFSET))(this);
		}

		::System::Boolean MOAFAHCIPGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_MOAFAHCIPGB_OFFSET))(this);
		}

		::System::Void CFEBPLMAAMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_CFEBPLMAAMP_OFFSET))(this, a1);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHKGDGBHHPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHKGDGBHHPK*))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHKGDGBHHPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHKGDGBHHPK*))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHKGDGBHHPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
