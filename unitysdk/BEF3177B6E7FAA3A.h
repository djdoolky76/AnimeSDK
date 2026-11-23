#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEF3177B6E7FAA3A_AEC82C946963EA47.h"
#include "unitysdk/System/Object.h"

class F4C42CA78127E415_HttpResponse;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEF3177B6E7FAA3A_BCB80CECE267951D_OFFSET UNITYSDK_OFFSET(0x299A7A0)
#define BEF3177B6E7FAA3A_BE2A1F1169FB3270_OFFSET UNITYSDK_OFFSET(0x299BD30)
#define BEF3177B6E7FAA3A_E5C99D178153FBED_OFFSET UNITYSDK_OFFSET(0x299A6F0)
#define BEF3177B6E7FAA3A_E5D001E455ED840D_OFFSET UNITYSDK_OFFSET(0x299AF90)
#define BEF3177B6E7FAA3A_E6502C0EB2BF85A1_OFFSET UNITYSDK_OFFSET(0x299C160)
#define BEF3177B6E7FAA3A_E681FBC52B11DDC9_1_OFFSET UNITYSDK_OFFSET(0x299B8F0)
#define BEF3177B6E7FAA3A_E681FBC52B11DDC9_OFFSET UNITYSDK_OFFSET(0x299BA30)
#define BEF3177B6E7FAA3A_EBCBAD7A756867AF_OFFSET UNITYSDK_OFFSET(0x299BE50)
#define BEF3177B6E7FAA3A_EF87A89731125BF6_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define BEF3177B6E7FAA3A_F286AD621D72B4B0_OFFSET UNITYSDK_OFFSET(0x299AE60)
#define BEF3177B6E7FAA3A_F57A0A32306C3E69_OFFSET UNITYSDK_OFFSET(0x299AD50)
#define BEF3177B6E7FAA3A_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x299C3B0)
#define BEF3177B6E7FAA3A_FB8662683A480BB0_OFFSET UNITYSDK_OFFSET(0x299B3D0)
#define BEF3177B6E7FAA3A__CTOR_OFFSET UNITYSDK_OFFSET(0x299C330)

inline static constexpr unsigned int BEF3177B6E7FAA3A_TypeDefinitionIndex = 15599;

class BEF3177B6E7FAA3A : public ::System::Object
{
public:
	static ::BEF3177B6E7FAA3A** StaticGet_E0E7A5F93551109B()
	{
		return (::BEF3177B6E7FAA3A**)Il2CppClass::FromTypeDefinitionIndex(BEF3177B6E7FAA3A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::String* B01BE4A9082DD2E8; // 0x10
	::System::String* E41C33A438857FAB; // 0x18
	::System::Int64 F1E989F234B81A4E; // 0x20

	::System::Void EBCBAD7A756867AF(::System::String* BFE507DEFC8B2E91, ::F4C42CA78127E415_HttpResponse* E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::F4C42CA78127E415_HttpResponse*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_EBCBAD7A756867AF_OFFSET))(this, BFE507DEFC8B2E91, E82293C0814051A5);
	}

	::System::Void BE2A1F1169FB3270(::System::String* E609D3F76595CBEB, ::System::String* BFE507DEFC8B2E91, ::BEF3177B6E7FAA3A_AEC82C946963EA47 E6EC7FE2151A0155, ::System::Int32 E1D84565DCCDF9ED)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::BEF3177B6E7FAA3A_AEC82C946963EA47, ::System::Int32))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_BE2A1F1169FB3270_OFFSET))(this, E609D3F76595CBEB, BFE507DEFC8B2E91, E6EC7FE2151A0155, E1D84565DCCDF9ED);
	}

	static ::BEF3177B6E7FAA3A* F7B0A23335A3DB16()
	{
		return ((::BEF3177B6E7FAA3A*(*)())((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Void E5C99D178153FBED(::System::String* B5046D57FE148F88, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* BFAB843A7E10FC6B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_E5C99D178153FBED_OFFSET))(this, B5046D57FE148F88, BFAB843A7E10FC6B);
	}

	::System::Collections::Generic::List_1<::System::String*>* BCB80CECE267951D(::System::Collections::Generic::List_1<::System::String*>* BB14855F226B96D7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*& E945D709B8B0B00C, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*& BFAB843A7E10FC6B)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*&))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_BCB80CECE267951D_OFFSET))(this, BB14855F226B96D7, E945D709B8B0B00C, BFAB843A7E10FC6B);
	}

	::System::String* E5D001E455ED840D(::System::Collections::Generic::List_1<::System::String*>* BB14855F226B96D7)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_E5D001E455ED840D_OFFSET))(this, BB14855F226B96D7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A__CTOR_OFFSET))(this);
	}

	::System::Int64 F286AD621D72B4B0()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_F286AD621D72B4B0_OFFSET))(this);
	}

	::System::Void E6502C0EB2BF85A1(::System::String* E609D3F76595CBEB, ::System::String* AFB50395C161EC0F, ::BEF3177B6E7FAA3A_AEC82C946963EA47 E6EC7FE2151A0155, ::System::Int32 E1D84565DCCDF9ED)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::BEF3177B6E7FAA3A_AEC82C946963EA47, ::System::Int32))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_E6502C0EB2BF85A1_OFFSET))(this, E609D3F76595CBEB, AFB50395C161EC0F, E6EC7FE2151A0155, E1D84565DCCDF9ED);
	}

	::System::Void E681FBC52B11DDC9(::System::Collections::Generic::List_1<::System::String*>* BB14855F226B96D7, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* BB83DD88CD827F8B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_E681FBC52B11DDC9_OFFSET))(this, BB14855F226B96D7, BB83DD88CD827F8B);
	}

	::System::Void E681FBC52B11DDC9_1(::System::String* B5046D57FE148F88, ::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_E681FBC52B11DDC9_1_OFFSET))(this, B5046D57FE148F88, E04D2BE64FCE9814);
	}

	::System::Void FB8662683A480BB0(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* F5293D562DA2F697)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_FB8662683A480BB0_OFFSET))(this, F5293D562DA2F697);
	}

	::System::Int64 F57A0A32306C3E69()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_F57A0A32306C3E69_OFFSET))(this);
	}

	::System::Void EF87A89731125BF6(::System::String* F12B9480E45CB844)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEF3177B6E7FAA3A_EF87A89731125BF6_OFFSET))(this, F12B9480E45CB844);
	}
};
