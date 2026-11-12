#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBHMAHKODLB;
namespace System { class Object; }

#define CBHMAHKODLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F32D5D0)
#define CBHMAHKODLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F32D610)
#define CBHMAHKODLB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F32D620)

inline static constexpr unsigned int CBHMAHKODLB___c_TypeDefinitionIndex = 32872;

	class CBHMAHKODLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBHMAHKODLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB___C_CTOR_OFFSET))(this);
		}

		::CBHMAHKODLB* __cctor_b__28_0()
		{
			return ((::CBHMAHKODLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHMAHKODLB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
