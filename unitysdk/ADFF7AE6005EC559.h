#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F4D3263A3E8C90E5;
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ADFF7AE6005EC559_AA0F2642CAF084FD_OFFSET UNITYSDK_OFFSET(0x3EF4760)
#define ADFF7AE6005EC559_B0D38F2B1CCD7488_OFFSET UNITYSDK_OFFSET(0x3EF4230)
#define ADFF7AE6005EC559_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x3EF46C0)
#define ADFF7AE6005EC559__CCTOR_OFFSET UNITYSDK_OFFSET(0x3EF48D0)

inline static constexpr unsigned int ADFF7AE6005EC559_TypeDefinitionIndex = 15269;

class ADFF7AE6005EC559 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_A0A3B2CC583CA17D()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ADFF7AE6005EC559_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* AA0F2642CAF084FD(::F4D3263A3E8C90E5* F79B4D487F303AB2, ::System::Boolean E4F2053F85F74524, ::System::String* AB58FFF7077B1130, ::System::Boolean FBB9B6273D60D754)
	{
		return ((::System::String*(*)(::F4D3263A3E8C90E5*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADFF7AE6005EC559_AA0F2642CAF084FD_OFFSET))(F79B4D487F303AB2, E4F2053F85F74524, AB58FFF7077B1130, FBB9B6273D60D754);
	}

	static ::System::Boolean B0D38F2B1CCD7488(::System::Text::StringBuilder* A94D8812A3A79CC8, ::F4D3263A3E8C90E5* F79B4D487F303AB2, ::System::Int32 B48C66E5FB2449C6, ::System::String* AB58FFF7077B1130, ::System::Boolean FBB9B6273D60D754)
	{
		return ((::System::Boolean(*)(::System::Text::StringBuilder*, ::F4D3263A3E8C90E5*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADFF7AE6005EC559_B0D38F2B1CCD7488_OFFSET))(A94D8812A3A79CC8, F79B4D487F303AB2, B48C66E5FB2449C6, AB58FFF7077B1130, FBB9B6273D60D754);
	}

	static ::System::Boolean BCB0A4DD6EA3B4C9(::Il2CppArray<::System::Byte>* B35BBBE7E39341A2, ::Il2CppArray<::System::Byte>* AE40CAA6BBFEAD2C)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ADFF7AE6005EC559_BCB0A4DD6EA3B4C9_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADFF7AE6005EC559__CCTOR_OFFSET))();
	}
};
