#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare { class CriManaMovieMaterialBase; }
namespace System { class Object; }

#define CRIWARE_CRIMANAMOVIEMATERIALBASE_F604615126FC05E8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define CRIWARE_CRIMANAMOVIEMATERIALBASE_F604615126FC05E8__CTOR_OFFSET UNITYSDK_OFFSET(0x2936F40)

namespace CriWare
{
	inline static constexpr unsigned int CriManaMovieMaterialBase_F604615126FC05E8_TypeDefinitionIndex = 19214;

	class CriManaMovieMaterialBase_F604615126FC05E8 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_F604615126FC05E8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::CriWare::CriManaMovieMaterialBase* FABFE839CB4F19A3, ::System::Boolean F43886F45ACA3649)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAMOVIEMATERIALBASE_F604615126FC05E8_INVOKE_OFFSET))(this, FABFE839CB4F19A3, F43886F45ACA3649);
		}
	};
}
