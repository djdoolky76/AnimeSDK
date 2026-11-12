#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKHNFMFIKGL;
namespace System { class Object; }

#define FKHNFMFIKGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B5540)
#define FKHNFMFIKGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B5580)
#define FKHNFMFIKGL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6B5590)

inline static constexpr unsigned int FKHNFMFIKGL___c_TypeDefinitionIndex = 26525;

	class FKHNFMFIKGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKHNFMFIKGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL___C_CTOR_OFFSET))(this);
		}

		::FKHNFMFIKGL* __cctor_b__28_0()
		{
			return ((::FKHNFMFIKGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
