#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MODNJLMIFJD;
namespace System { class Object; }

#define MODNJLMIFJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDE09C0)
#define MODNJLMIFJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDE0A00)
#define MODNJLMIFJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDE0A10)

inline static constexpr unsigned int MODNJLMIFJD___c_TypeDefinitionIndex = 25621;

	class MODNJLMIFJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MODNJLMIFJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODNJLMIFJD___C_CTOR_OFFSET))(this);
		}

		::MODNJLMIFJD* __cctor_b__33_0()
		{
			return ((::MODNJLMIFJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODNJLMIFJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
