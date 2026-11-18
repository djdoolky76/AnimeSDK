#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPIEIAPMKHM;
class MPKBDIJDMAP;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RANDOMTEXTURESHEETDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x1044C840)
#define MOLEMOLE_RANDOMTEXTURESHEETDATA_RANDOM_OFFSET UNITYSDK_OFFSET(0x1044C8C0)
#define MOLEMOLE_RANDOMTEXTURESHEETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1044CAE0)

namespace MoleMole
{
	inline static constexpr unsigned int RandomTextureSheetData_TypeDefinitionIndex = 62907;

	class RandomTextureSheetData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Int32>*>* Items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMTEXTURESHEETDATA__CTOR_OFFSET))(this);
		}

		::MPKBDIJDMAP* CreatePlayer(::JPIEIAPMKHM* textureSheetImpl)
		{
			return ((::MPKBDIJDMAP*(*)(::PVOID, ::JPIEIAPMKHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMTEXTURESHEETDATA_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}

		::System::String* Random()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMTEXTURESHEETDATA_RANDOM_OFFSET))(this);
		}
	};
}
